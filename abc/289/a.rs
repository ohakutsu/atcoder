fn main() {
    let mut s = {
        let mut buf = String::new();
        let stdin = std::io::stdin();
        stdin.read_line(&mut buf).unwrap();
        buf.trim().to_string()
    };

    s = s.replace('1', "z");
    s = s.replace('0', "1");

    println!("{}", s.replace('z', "0"));
}
