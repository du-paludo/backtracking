# Backtracking Problems

This repository contains various algorithms used to solve backtracking problems. Each file demonstrates different computational problems and techniques, ranging from generating binary strings to solving Sudoku puzzles. Below is a description of each file and instructions on how to use them.

## Files

**1. Binary Strings Generator**
- **File:** `binary_strings.c`
- **Description:** Generates all possible binary strings of length n and prints them.

**2. Subsets Generator**
- **File:** `subsets.c`
- **Description:** Generates all possible subsets of a given set and prints them.

**3. Knight's Tour Problem**
- **File:** `knights_tour.c`
- **Description:** Solves the Knight's Tour problem using backtracking. The program finds a path for a knight on an N x N chessboard such that the knight visits each square exactly once.

**4. Maze Solver**
- **File:** `maze_solver.c`
- **Description:** Solves a maze using backtracking. The program finds a path from the top-left corner to the bottom-right corner of a maze.

**5. Subset Sum Problem**
- **File:** `subset_sum.c`
- **Description:** Finds all subsets of a set whose sum is less than a specified value b.

**6. Sudoku Solver**
- **File:** `sudoku_solver.c`
- **Description:** Solves a Sudoku puzzle using backtracking. The program attempts to fill in a 9x9 grid according to Sudoku rules.

## Compilation and Execution

To compile and run any of these programs, use a C compiler such as gcc. For example:

1. Compile the code:

```sh
gcc binary_strings.c -o binary_strings
gcc subsets.c -o subsets
gcc knights_tour.c -o knights_tour
gcc maze_solver.c -o maze_solver
gcc subset_sum.c -o subset_sum
gcc sudoku_solver.c -o sudoku_solver
```

2. Run the compiled program:

```sh
./binary_strings
./subsets
./knights_tour
./maze_solver
./subset_sum
./sudoku_solver
```

Make sure to provide the necessary input for programs that require it, such as matrix values for the maze solver.
