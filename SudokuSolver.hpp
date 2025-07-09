#ifndef SUDOKUSOLVER_HPP
#define SUDOKUSOLVER_HPP

#include <iostream>
#include"vector"
using namespace std;

class SudokuSolver{
    public:
    bool solveAuto(std::vector<std::vector<int>>& board);
    bool isValid(const std::vector<std::vector<int>>& board, int row, int col, int num);
};

#endif