use std::collections::HashMap;
use std::io;

fn main() {
    let (n, x) = {
        let mut buf = String::new();
        io::stdin().read_line(&mut buf).unwrap();
        let mut iter = buf.split_whitespace().map(|s| s.parse::<usize>().unwrap());
        (iter.next().unwrap(), iter.next().unwrap())
    };

    let ab = {
        let mut hash = HashMap::new();
        for _ in 0..n {
            let mut buf = String::new();
            io::stdin().read_line(&mut buf).unwrap();
            let mut iter = buf.split_whitespace().map(|s| s.parse::<usize>().unwrap());
            let a_i = iter.next().unwrap();
            let b_i = iter.next().unwrap();

            hash.insert(a_i, b_i);
        }

        hash
    };

    let mut dp = vec![false; x + 1];
    let dp_len = dp.len();
    dp[0] = true;

    for (a, b) in &ab {
        for _ in 0..(*b) {
            for i in (0..(dp_len)).rev() {
                if i < *a {
                    break;
                }

                if dp[i - a] {
                    dp[i] = true;
                }
            }
        }
    }

    if dp[x] {
        println!("Yes");
    } else {
        println!("No");
    }
}
