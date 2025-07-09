/*
• SudokuBoard
o Stores and manipulates the 9×9 grid.
o Validates row/column/box constraints.
o Prints the board.
o (Optional) Loads and saves puzzle data to a file
*/

#include "SudokuBoard.hpp"


SudokuBoard :: SudokuBoard (int r, int c, int v) : row(r), col(c), value(v){
    board.resize(9, std::vector<int>(9, 0));
}

std::vector<std::vector<int>>& SudokuBoard :: getBoard(void){
    return board;
}

void SudokuBoard :: setBoard(std::vector<std::vector<int>> newBoard){
    for(int i = 0; i<9; i++){
        for(int j=0; j<9; j++){
            board[i][j] = newBoard[i][j];
        }
    }
    // board = newBoard;
}

void SudokuBoard :: displayBoard(){
    std::cout<< endl << "-------------------------------------" << endl;
    int column = 0, row = 0;
    for(auto currentRow : board){
        row++;
        for(auto value : currentRow){
            column++;
            if (value == 0){
                std::cout<< ". ";
            }
            else{
                std::cout<< value << " ";
            }
            if ((column % 3 == 0) && (column % 9 != 0)){
                std::cout<< " | ";
            }
            
        }
        std::cout<< endl ;
        if (row % 3 == 0){
        std::cout<< endl << "-------------------------------------" << endl;
        }
    }
}

void SudokuBoard :: setValue(int r, int c, int v) {
    row = r-1;
    col = c-1;

    int checkRow = 3*int(row/3);
    int checkCol = 3*int(col/3);
    bool invalid = false;

    // check if the cell is occupied 
    if(board[row][col] != 0){
        std::cout<<"```"<<endl;
        std::cout<<"Invalid move: this cell is occupied." <<endl;
        std::cout<<"```"<<endl;
        invalid = true;
    }
    // check the row constrain
    if(!invalid){
        for(int curVal : board[row]){
            if (curVal == v){
                std::cout<<"```"<<endl;
                std::cout<<"Invalid move: value already in that row."  <<endl;
                std::cout<<"```"<<endl;
                invalid = true;
            }
        }
    }
    //check the column constrain
    if(!invalid){
        for(int i = 0; i<9 ;i++){
            if (board[i][col] == v){
                std::cout<<"```"<<endl;
                std::cout<<"Invalid move: value already in that column." <<endl;
                std::cout<<"```"<<endl;
                invalid = true;
            }
        }
    }
    // check the 3x3 grid constrain
    if(!invalid){
        for(int i=checkRow; i<checkRow+3; i++){
            for(int j=checkCol; j<checkCol+3; j++){
                if(board[i][j] == v){
                    std::cout<<"```"<<endl;
                    std::cout<<"Invalid move: value already in 3x3 box." <<endl;
                    std::cout<<"```"<<endl;
                    invalid = true;
                }
            }
        }
    }
    if(!invalid){
        board[row][col] = v;
        std::cout<<"```"<<endl;
        std::cout<<"Move accepted!"<<endl;
        std::cout<<"```"<<endl;
        std::cout<<"Updated board (Row="<<row<<", Col="<<col<<" now has `"<<v<<"`):"<<endl;
        std::cout<<"```"<<endl;
    }
}
