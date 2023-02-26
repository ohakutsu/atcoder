use std::collections::HashSet;

fn main() {
    let _n = {
        let mut buf = String::new();
        let stdin = std::io::stdin();
        stdin.read_line(&mut buf).unwrap();
        buf.trim().parse::<usize>().unwrap()
    };

    let s = {
        let mut buf = String::new();
        let stdin = std::io::stdin();
        stdin.read_line(&mut buf).unwrap();
        buf.trim().to_string()
    };

    let mut xy = HashSet::new();

    let mut prev_x: i64 = 0;
    let mut prev_y: i64 = 0;
    xy.insert((prev_x, prev_y));

    let mut yes = false;

    for s_i in s.chars() {
        let (cur_x, cur_y) = match s_i {
            'R' => (prev_x + 1, prev_y),
            'L' => (prev_x - 1, prev_y),
            'U' => (prev_x, prev_y + 1),
            'D' => (prev_x, prev_y - 1),
            _ => panic!("unknown"),
        };

        if xy.contains(&(cur_x, cur_y)) {
            yes = true;
            break;
        }

        xy.insert((cur_x, cur_y));
        prev_x = cur_x;
        prev_y = cur_y;
    }

    if yes {
        println!("Yes");
    } else {
        println!("No");
    }
}
