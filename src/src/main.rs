use std::io;
use std::collections::VecDeque;

struct Scanner {
    buffer: VecDeque<String>,
}

impl Scanner {
    fn new() -> Self {
        Self { buffer: VecDeque::new() }
    }

    fn take_int(&mut self) -> usize {
        loop {
            if let Some(token) = self.buffer.pop_front() {
                return token.parse().expect("Failed to parse integer");
            }
            
            let mut input = String::new();
            let bytes = io::stdin().read_line(&mut input).expect("Failed to read line");
            
            if bytes == 0 {
                panic!("Unexpected End of Input");
            }
            
            self.buffer = input.split_whitespace().map(String::from).collect();
        }
    }
}

fn main() {
    let mut scanner = Scanner::new();
    let number1 = scanner.take_int();
    let number2 = scanner.take_int();
    println!("{}", number1 * number2);
}
