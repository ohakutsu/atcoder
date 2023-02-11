fn main() {
    let (n, m) = {
        let mut buf = String::new();
        let stdin = std::io::stdin();
        stdin.read_line(&mut buf).unwrap();

        let mut iter = buf.split_whitespace().map(|s| s.parse::<usize>().unwrap());
        (iter.next().unwrap(), iter.next().unwrap())
    };

    let s = {
        let mut arr = Vec::with_capacity(m);

        for _ in 0..m {
            let mut buf = String::new();
            let stdin = std::io::stdin();
            stdin.read_line(&mut buf).unwrap();
            let _c = buf.trim().parse::<usize>().unwrap();

            buf.clear();
            stdin.read_line(&mut buf).unwrap();
            let a: Vec<_> = buf
                .split_whitespace()
                .map(|s| s.parse::<usize>().unwrap())
                .collect();
            arr.push(a);
        }

        arr
    };

    let mut ans = 0;

    for bit in 0..(1 << m) {
        let arr: Vec<_> = s
            .iter()
            .enumerate()
            .filter(|(i, _)| bit & (1 << i) != 0)
            .map(|(_, a)| a)
            .collect();

        let flatten: Vec<_> = arr.into_iter().flatten().collect();

        let ok = (1..=n).into_iter().all(|x| flatten.contains(&&x));
        if ok {
            ans += 1;
        }
    }

    println!("{}", ans);
}
