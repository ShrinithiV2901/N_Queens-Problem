# N_Queens-Problem

This is a simple C program that solves the **N-Queens problem** using the **backtracking** algorithm.

##  Problem Description
The N-Queens problem is the challenge of placing `n` chess queens on an `n×n` chessboard so that no two queens threaten each other. Thus, a solution requires that no two queens share the same row, column, or diagonal.

## How It Works
The program uses a recursive backtracking function `solve()` which:
- Tries placing a queen in each column of the current row.
- Checks whether the position is safe using the `issafe()` function.
- If safe, places the queen and moves to the next row.
- Backtracks if no valid position is found in a row.

Once all queens are placed (`row == n`), the board is printed using the `display()` function.

## Compilation and Execution

### Compile

gcc nqueens.c -o nqueens

### Run
  ./nqueens

## Output Screenshots
n=4

![image](https://github.com/user-attachments/assets/71517af7-5fd0-4615-9bf6-fa257b89d3d2)

n=8

 ![image](https://github.com/user-attachments/assets/3519220b-6c2a-42af-bf93-7ab6b678dbf4)
