fn main() {
    let (n, m) = {
        let mut buf = String::new();
        let stdin = std::io::stdin();
        stdin.read_line(&mut buf).unwrap();

        let mut iter = buf.split_whitespace().map(|s| s.parse::<usize>().unwrap());
        (iter.next().unwrap(), iter.next().unwrap())
    };

    let s = {
        let mut arr = Vec::new();

        for _ in 0..m {
            let mut buf = String::new();
            let stdin = std::io::stdin();
            stdin.read_line(&mut buf).unwrap();

            let mut iter = buf.split_whitespace().map(|s| s.parse::<usize>().unwrap());
            let k = iter.next().unwrap();
            let s: Vec<_> = iter.collect();

            assert!(k == s.len());
            arr.push(s);
        }

        assert!(m == arr.len());
        arr
    };

    let p = {
        let mut buf = String::new();
        let stdin = std::io::stdin();
        stdin.read_line(&mut buf).unwrap();

        let arr: Vec<_> = buf
            .split_whitespace()
            .map(|s| s.parse::<usize>().unwrap())
            .collect();

        assert!(m == arr.len());
        arr
    };

    let mut ans = 0;

    for bit in 0..(1 << n) {
        let mut ok = true;

        // for (s_i, p_i) in std::iter::zip(&s, &p) {
        for (s_i, p_i) in s.iter().zip(&p) {
            let on_count = s_i
                .iter()
                .filter(|s_ij| bit & (1 << (**s_ij - 1)) != 0)
                .count();

            if on_count % 2 != *p_i {
                ok = false;
                break;
            }
        }

        if ok {
            ans += 1;
        }
    }

    println!("{}", ans);
}
