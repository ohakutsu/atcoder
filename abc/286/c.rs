use std::io;

fn main() {
    let (n, a, b) = {
        let mut buf = String::new();
        io::stdin().read_line(&mut buf).unwrap();
        let mut iter = buf.split_whitespace().map(|s| s.parse::<usize>().unwrap());

        (
            iter.next().unwrap(),
            iter.next().unwrap(),
            iter.next().unwrap(),
        )
    };

    let s = {
        let mut buf = String::new();
        io::stdin().read_line(&mut buf).unwrap();
        buf.trim().to_string()
    };

    let mut chars: Vec<_> = s.chars().collect();
    let mut ans = n * b;

    for move_count in 0..n {
        let mut sum = move_count * a;

        for i in 0..n {
            let j = n - 1 - i;
            if i >= j {
                break;
            }

            if chars[i] != chars[j] {
                sum += b;
            }
        }

        ans = ans.min(sum);

        chars.rotate_left(1);
    }

    println!("{}", ans);
}
