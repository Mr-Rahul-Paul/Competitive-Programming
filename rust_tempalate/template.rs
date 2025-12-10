use std::io::{self, BufRead};

const MOD: i64 = 1000000007;

use std::io;

macro_rules! input {
    () => {{
        let mut s = String::new();
        io::stdin().read_line(&mut s).unwrap();
        s.trim().to_string()
    }};

    (int) => {{
        input!().parse::<i64>().unwrap()
    }};

    (bool) => {{
        input!().parse::<bool>().unwrap()
    }};
}

fn main() {
    let s = input!(); 
    println!("string: {}", s);
    let n = input!(int); 
    println!("int: {}", n);
    let b = input!(bool); 
    println!("bool: {}", b);
}

fn solve() {
    // Read single number: let n = input!(int);
    // Read multiple numbers: let arr = input!(ints);

    let n = input!(int);
    let arr = input!(ints);

    println!("{} {:?}", n, arr);
}

fn main() {
    let tc = input!(int);

    for _ in 0..tc {
        solve();
        println!();
    }
}
