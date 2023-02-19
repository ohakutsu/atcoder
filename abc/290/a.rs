fn main() {
    let (n, _m) = {
        let mut buf = String::new();
        let stdin = std::io::stdin();
        stdin.read_line(&mut buf).unwrap();

        let mut iter = buf.split_whitespace().map(|s| s.parse::<usize>().unwrap());
        (iter.next().unwrap(), iter.next().unwrap())
    };

    let a = {
        let mut buf = String::new();
        let stdin = std::io::stdin();
        stdin.read_line(&mut buf).unwrap();

        let arr: Vec<_> = buf
            .split_whitespace()
            .map(|s| s.parse::<usize>().unwrap())
            .collect();

        assert!(arr.len() == n);
        arr
    };

    let mut buf = String::new();
    let stdin = std::io::stdin();
    stdin.read_line(&mut buf).unwrap();

    let iter = buf.split_whitespace().map(|s| s.parse::<usize>().unwrap());
    let mut sum = 0;

    for b_i in iter {
        sum += a[b_i - 1];
    }

    println!("{}", sum);
}
