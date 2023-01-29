use std::io;

fn main() {
    let (_n, p, q, r, _s) = {
        let mut buf = String::new();
        io::stdin().read_line(&mut buf).unwrap();
        let arr: Vec<usize> = buf.split_whitespace().map(|s| s.parse().unwrap()).collect();

        (arr[0], arr[1], arr[2], arr[3], arr[4])
    };

    let mut a: Vec<u32> = {
        let mut buf = String::new();
        io::stdin().read_line(&mut buf).unwrap();
        let arr = buf.split_whitespace().map(|s| s.parse().unwrap()).collect();

        arr
    };

    for i in 0..=(q - p) {
        a.swap(p + i - 1, r + i - 1);
    }

    let result: Vec<_> = a.iter().map(|i| i.to_string()).collect();
    println!("{}", result.join(" "));
}
