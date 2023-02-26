fn main() {
    let s = {
        let mut buf = String::new();
        let stdin = std::io::stdin();
        stdin.read_line(&mut buf).unwrap();
        buf.trim().to_string()
    };

    for (i, c) in s.chars().enumerate() {
        if !c.is_ascii_lowercase() {
            println!("{}", i + 1);
            break;
        }
    }
}
