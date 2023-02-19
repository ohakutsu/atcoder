use std::collections::HashSet;

fn main() {
    let (_n, k) = {
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

        let set: HashSet<_> = buf
            .split_whitespace()
            .map(|s| s.parse::<usize>().unwrap())
            .collect();

        set
    };

    let mut ans = 0;
    for i in 0..k {
        if !a.contains(&i) {
            break;
        }

        ans += 1;
    }

    println!("{}", ans);
}
