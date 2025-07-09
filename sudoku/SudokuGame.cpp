/*• SudokuGame
o Presents console menu, reads/writes user input.
o Coordinates SudokuBoard and SudokuSolver.
o Handles error-checking for moves and file operations.
*/

#include "SudokuGame.hpp"

void SudokuGame :: showMenu(){
        board.displayBoard();
        std::cout<<"1) Enter a move\n" 
        << "2) Solve automatically\n"
        << "3) Load puzzle from file\n"
        << "4) Save current puzzle to file\n"
        << "5) Exit\n"
        << "Choice: \n";
        submitChoice();
}

void SudokuGame :: submitChoice(){
    std::cin >> choice;
    std::cout << "Choice: "<< choice << std::endl;
    switch(choice){
        case 1:
        std::cout << "Enter row (1-9), column (1-9), and value (1-9): "<<std::endl;
        std::cin >> row >> col >> value;
        if (row<0 || row>9){
            std::cout << "Row must be between 1 and 9."<< std::endl;
        }
        if (col<0 || col>9){
            std::cout << "Column must be between 1 and 9."<< std::endl;
        }
        if (value<0 || value>9){
            std::cout << "Value must be between 1 and 9."<< std::endl;
        }
        board.setValue(row, col, value);
        break;  
        case 2:
        if(solver.solveAuto(board.getBoard())){
            cout<<"Great job! The Sudoku is solved!"<< std::endl;
        }
        else{
            cout<<"The Sudoku cannot be solved!"<< std::endl;
        }
        break;
        case 3:
        break;
        case 4:
        break;
        case 5:
        return;
        break;
        default:
        std::cout << "No such option, choose a valid number from menu." << std::endl;
        break;
    }
    showMenu();
}
