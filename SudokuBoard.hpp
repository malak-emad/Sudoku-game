/*
• SudokuBoard
o Stores and manipulates the 9×9 grid.
o Validates row/column/box constraints.
o Prints the board.
o (Optional) Loads and saves puzzle data to a file
*/
#ifndef SUDOKUBOARD_HPP
#define SUDOKUBOARD_HPP

#include <iostream>
#include <vector>
using namespace std;


class SudokuBoard{
    private:
    int row, col, value;
    std::vector<std::vector<int>> board;
    public:
    SudokuBoard(int r=0, int c=0, int v=0); //constructor
    void displayBoard();
    void setValue(int r, int c, int v);
    std::vector<std::vector<int>>& getBoard(void);
    void setBoard(std::vector<std::vector<int>>);
};

#endif