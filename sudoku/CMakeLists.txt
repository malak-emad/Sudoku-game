cmake_minimum_required(VERSION 3.10)
project(SudokuGame)

set(CMAKE_CXX_STANDARD 11)

add_executable(sudoku
    main.cpp
    SudokuBoard.cpp
    SudokuGame.cpp
    SudokuSolver.cpp
)
