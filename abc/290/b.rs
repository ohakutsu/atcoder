fn main() {
    let (n, k) = {
        let mut buf = String::new();
        let stdin = std::io::stdin();
        stdin.read_line(&mut buf).unwrap();

        let mut iter = buf.split_whitespace().map(|s| s.parse::<usize>().unwrap());
        (iter.next().unwrap(), iter.next().unwrap())
    };

    let s = {
        let mut buf = String::new();
        let stdin = std::io::stdin();
        stdin.read_line(&mut buf).unwrap();

        buf.trim().to_string()
    };

    let chars = s.chars();
    let mut sum = 0;
    let mut ans_idx = Vec::with_capacity(n);

    for (idx, s_i) in chars.enumerate() {
        if sum >= k {
            break;
        }

        if s_i == 'o' {
            ans_idx.push(idx);
            sum += 1;
        }
    }

    for i in 0..n {
        if ans_idx.contains(&i) {
            print!("o");
        } else {
            print!("x");
        }
    }

    println!();
}
