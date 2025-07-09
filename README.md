# 🧩 Sudoku Game – C++ Console Application

A modular, object-oriented Sudoku puzzle game built in C++. This project demonstrates clean separation between the core logic (board, solver, generator) and user interaction (console), making it extensible for GUI-based applications like Qt in the future.

---

## 🚀 Features

- 🖥️ Console-based interface
- ✅ Validity checks (row, column, 3×3)
- 🧠 Backtracking-based Sudoku solver
- 📂 Load puzzles from file (optional)
- 💾 Save current board to file (optional)
- 🧩 Puzzle generation & advanced solving techniques (optional)

---

## 🎯 Objectives

- Practice C++ OOP and STL in a real-world mini-project
- Build and solve 9×9 Sudoku puzzles
- Apply clean architecture: separation between board logic, solver, and user I/O
- Implement error handling and input validation

---

## 📁 Project Structure

├── SudokuBoard.hpp / .cpp # 9x9 grid logic, printing, validation
├── SudokuSolver.hpp / .cpp # Backtracking algorithm
├── SudokuGame.hpp / .cpp # Console menu + user interaction
├── (Optional) SudokuGenerator.* # Puzzle generator logic
├── (Optional) SudokuAdvancedChecks.* # Techniques: locked candidates, naked pairs, etc.
└── main.cpp # Application entry point


---

## 🧱 Technologies

- Language: C++
- Paradigm: OOP
- Libraries: STL (e.g., `vector`)
- Build System: CMake

---

## 🛠️ Build Instructions

### 🧰 Prerequisites
- A C++ compiler (supporting C++11 or higher)
- [CMake](https://cmake.org/) installed

### 🔧 Build Steps

```bash
git clone https://github.com/your-username/sudoku-cpp.git
cd sudoku-cpp
mkdir build
cd build
cmake ..
make
./SudokuGame


5 3 . | . 7 . | . . .
6 . . | 1 9 5 | . . .
. 9 8 | . . . | . 6 .
---------------------
8 . . | . 6 . | . . 3
4 . . | 8 . 3 | . . 1
7 . . | . 2 . | . . 6
---------------------
. 6 . | . . . | 2 8 .
. . . | 4 1 9 | . . 5
. . . | . 8 . | . 7 9

1) Enter a move
2) Solve automatically
3) Load puzzle from file
4) Save current puzzle to file
5) Exit
Choice:
