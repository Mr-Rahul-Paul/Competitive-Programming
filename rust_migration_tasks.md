# Codeforces C++ to Rust Migration Tasks

This document lists the common actions and patterns found in your existing C++ Codeforces solutions. Use this list to prompt an LLM to generate corresponding Rust snippets and notes.

## 1. Project Structure & Boilerplate

- [ ] **Basic Template**: Setting up a Rust file with a `main` function.
- [ ] **Fast I/O**: Equivalent of `ios_base::sync_with_stdio(0); cin.tie(0);`.
- [ ] **Test Case Loop**: Reading an integer `t` (test cases) and running a loop `t` times.
- [ ] **Solve Function**: Creating a separate `solve()` function to handle each test case logic.
- [ ] **Imports**: Common imports equivalent to `#include <bits/stdc++.h>` (e.g., `std::collections`, `std::cmp`).

## 2. Input Handling

- [ ] **Reading Single Integers**: Reading variables like `n`, `m`, `k` from stdin.
- [ ] **Reading Strings**: Reading a single word or line into a `String`.
- [ ] **Reading Arrays/Vectors**:
  - Reading `n` integers into a `Vec<i32>` or `Vec<i64>`.
  - Reading multiple values on the same line.

## 3. Data Structures & Operations

- [ ] **Vectors (`Vec<T>`)**:
  - Creating a vector of size `n` initialized with zeros (like `vector<int> cnt(26, 0)`).
  - Accessing elements by index (`v[i]`).
  - Modifying elements (`v[i] = x`).
  - Iterating over a vector (forward and backward).
  - "Pushing back" elements (dynamic growth).
- [ ] **Strings (`String` / `&str`)**:
  - Concatenating strings (`s += c` or `s = s + t`).
  - Checking if a string contains a substring (`find` equivalent).
  - iterating over characters of a string.
  - Converting characters to indices (e.g., `c - 'A'`).
- [ ] **Hash Maps / Frequency Arrays**:
  - Counting frequency of elements (replacing `int cnt[26]`).

## 4. Algorithms & Logic

- [ ] **Loops**:
  - `for` loops (range based `0..n`).
  - `while` loops.
  - Reverse loops (iterating backwards, e.g., `n-1` down to `0`).
- [ ] **Conditionals**: `if`, `else if`, `else`.
- [ ] **Math Operations**:
  - Integer division and Modulo (`/`, `%`).
  - `min`, `max`, `abs` functions.
  - Bitwise operations (if used).

## 5. Output Handling

- [ ] **Basic Printing**: Using `println!`, `print!`.
- [ ] **Formatted Output**: Printing variables inside strings.
- [ ] **Conditional Output**: Printing "YES" / "NO" based on logic.
- [ ] **Flushing**: Ensuring output is printed immediately (if needed).

## 6. Specific C++ Patterns to Translate

- [ ] **Macros**: Replacing `#define int long long` (Rust uses `i64` explicitly).
- [ ] **Bitset**: Equivalent of `bitset<64>(n).to_string()`.
- [ ] **Type Conversions**: String to Integer (`atoll`) and Integer to String (`to_string`).
