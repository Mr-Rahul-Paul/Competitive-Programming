use std::io::{Read, stdin};

// fn main() {
//     // Read entire stdin
//     let mut input = String::new();
//     io::stdin().read_to_string(&mut input).unwrap();

//     // Split by whitespace (space, newline, tab — everything)
//     let mut it = input.split_whitespace();

//     let x: i64 = it.next().unwrap().parse().unwrap();
//     let n: i64 = it.next().unwrap().parse().unwrap();

//     println!(
//         "this is the value of x: {} and this is the value of n: {}",
//         x, n
//     );
// }

fn take_int() -> i128 {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    return input.trim().parse().unwrap();
}
fn take_vector() -> Vec<usize> {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let arr: Vec<usize> = input
        .trim()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();
    return arr;
}
fn main() {
    let nums = take_vector();
    // Assuming input "1 2", extracting n and t
    if nums.len() >= 2 {
        let n = nums[0];
        let t = nums[1];
        println!(
            "this is the value of n: {} and this is the value of t: {}",
            n, t
        );
    } else {
        println!("Read vector: {:?}", nums);
    }
}
