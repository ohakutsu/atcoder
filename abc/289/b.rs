fn main() {
    let (n, _m) = {
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

        let arr: Vec<_> = buf
            .split_whitespace()
            .map(|s| s.parse::<usize>().unwrap())
            .collect();

        arr
    };

    let mut graph = vec![0; n + 1];
    for a_i in a.iter() {
        graph[*a_i] = a_i + 1;
    }

    let mut result = Vec::with_capacity(n);

    for i in 1..=n {
        if result.contains(&i) {
            continue;
        }

        walk(&graph, &mut result, i);
    }

    let result: Vec<_> = result.iter().map(|n| n.to_string()).collect();
    println!("{}", result.join(" "));
}

fn walk(graph: &Vec<usize>, result: &mut Vec<usize>, index: usize) {
    let next = graph[index];

    if next == 0 {
        result.push(index);
        return;
    }

    walk(graph, result, next);
    result.push(index);
}
