use std::io;

fn main() {
    let _n: usize = {
        let mut buf = String::new();
        io::stdin().read_line(&mut buf).unwrap();
        buf.trim().parse().unwrap()
    };

    let s = {
        let mut buf = String::new();
        io::stdin().read_line(&mut buf).unwrap();
        buf.trim().to_string()
    };

    println!("{}", s.replace("na", "nya"));
}
