fn main() {
    let n = {
        let mut buf = String::new();
        let stdin = std::io::stdin();
        stdin.read_line(&mut buf).unwrap();
        buf.trim().parse::<usize>().unwrap()
    };

    let mut x = {
        let mut buf = String::new();
        let stdin = std::io::stdin();
        stdin.read_line(&mut buf).unwrap();
        let arr: Vec<_> = buf
            .split_whitespace()
            .map(|s| s.parse::<usize>().unwrap())
            .collect();
        arr
    };

    x.sort();

    let s = &x[n..(x.len() - n)];
    let sum = s.iter().sum::<usize>();
    let avg = (sum as f64) / (s.len() as f64);

    println!("{}", avg);
}
