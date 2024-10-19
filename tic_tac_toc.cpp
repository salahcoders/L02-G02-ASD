/*
    3.1 Objective:
    Build a two-player tic-tac-toe game.
    3.2 Instructions:
    • Create a 3x3 grid to represent the board.
    • Allow Player 1 to choose ”X” and Player 2 to choose ”O.”
    • Prompt each player to enter their move by specifying row and column.
    • After each move, check for a winner or a draw.
    • Display the final board state and the result of the game.
*/

#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

bool isGameOver = false;

char playerOne, playerTwo;
char board[3][3] = { {'0','1','2'},{'3','4','5'},{'6','7','8'}};

void displayBoard() {

    cout << "\n";
    for (int i = 0;i < 3;++i) {
        for (int j = 0;j < 3;++j) {
            
            cout << board[i][j] <<"  |  ";
        }
        cout << " \n---  ---   --- " << "\n";

    }
    cout << "\n";
}
void editBoard() {
    cout << "Player 01 (X): ";
    cin >> playerOne;
    cout << "PLayer 02 (O): ";
    cin >> playerTwo;
    for (int i = 0;i < 3;++i) {
        for (int j = 0;j < 3;++j) {
            if (playerOne == board[i][j]) {
                board[i][j] = 'X';
            }
            else if(playerTwo == board[i][j]) {
                board[i][j] = 'O';
            }
        }
    }
}
void checkWinner() {
    // Check all rows for a win
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            cout << board[i][0] << " is the winner!\n";
            isGameOver = true;
            return;
        }
    }

    // Check all columns for a win
    for (int i = 0; i < 3; ++i) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            cout << board[0][i] << " is the winner!\n";
            isGameOver = true;
            return;
        }
    }

    // Check diagonals for a win
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0])) {
        cout << board[1][1] << " is the winner!\n";
        isGameOver = true;
        return;
    }
}
int main() {
    cout << "++++++ Tic-Tac-Toc ++++++\n" << endl;
    cout << " 0  |  1  |  2  " << "\n";
    cout << " ---  ---   --- " << "\n";
    cout << " 3  |  4  |  5  " << "\n";
    cout << " ---  ---   --- " << "\n";
    cout << " 6  |  7  |  8  " << "\n";
    cout << " ---  ---   --- " << "\n";
    while (!isGameOver) {
        editBoard();
        displayBoard();
        checkWinner();
        }
    
    return 0;
}



