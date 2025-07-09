#include "SudokuSolver.hpp"

bool SudokuSolver :: solveAuto(std::vector<std::vector<int>>& board){
    // check if the cell is occupied 
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(board[i][j] == 0){
                for(int currCheck=1; currCheck<10; currCheck++){
                    // check if this value can be used 
                    if(isValid(board, i, j, currCheck)){
                        //assign this value to the cell
                        board[i][j] = currCheck;
                        // send the board after assigning a value to the last cell 
                        if(solveAuto(board)){
                            return true;
                        }
                        // cannot solve this cell with the current cells value
                        board[i][j] = 0; 
                    }
                }
                return false;
            }
        }
    }
    // no more zero cells
    return true;
}

bool SudokuSolver :: isValid(const std::vector<std::vector<int>>& board, int r, int c, int v){

    int checkRow = 3*int(r/3);
    int checkCol = 3*int(c/3);

    // check the row constrain
    for(int curVal : board[r]){
        if (curVal == v){
            return false;
        }
    }
    //check the column constrain
    for(int i = 0; i<9 ;i++){
        if (board[i][c] == v){
            return false;
        }
    }
    // check the 3x3 grid constrain
    for(int i=checkRow; i<checkRow+3; i++){
        for(int j=checkCol; j<checkCol+3; j++){
            if(board[i][j] == v){
                return false;
            }
        }
    }
    return true;
}
