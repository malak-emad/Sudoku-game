/*
• SudokuGame
o Presents console menu, reads/writes user input.
o Coordinates SudokuBoard and SudokuSolver.
o Handles error-checking for moves and file operations.
*/
#ifndef SUDOKUGAME_HPP
#define SUDOKUGAME_HPP

#include <iostream>
using namespace std;

#include "SudokuBoard.hpp"
#include "SudokuSolver.hpp"


class SudokuGame{
    private:
    int choice;
    int row, col, value;
    SudokuBoard board;
    SudokuSolver solver;
    public:
    SudokuGame(SudokuBoard b) : board(b) {};
    void showMenu(void);
    void submitChoice();
};

#endif