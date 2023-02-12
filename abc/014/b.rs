fn main() {
    let (n, x) = {
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
            .map(|s| s.parse::<i64>().unwrap())
            .collect();

        assert!(arr.len() == n);
        arr
    };

    let mut sum = 0;

    for (i, a_i) in a.iter().enumerate() {
        if x & (1 << i) != 0 {
            sum += a_i;
        }
    }

    println!("{}", sum);
}
