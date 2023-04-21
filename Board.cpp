//
// Created by Eden Bar on 21/04/2023.
//

#include "Board.h"
#include <iostream>
using namespace std;

Board::Board(){
    for (int row = 0; row < HEIGHT; row++) {
        for (int col = 0; col < WIDTH; col++) {
            if (row == 0 || row == HEIGHT - 1 || col == 0 || col == WIDTH - 1) {
                // Add a border around the edge of the board
                board[row][col] = '#';
            } else if ((row == 3 || row == HEIGHT - 4) && col % 2 == 0) {
                // Add vertical walls in the middle of the board
                board[row][col] = '#';
            } else if ((col == 3 || col == WIDTH - 4) && row % 2 == 0) {
                // Add horizontal walls in the middle of the board
                board[row][col] = '#';
            } else {
                // Add dots in the remaining spaces
                board[row][col] = ' ';
            }
        }
    }
}

void Board::print()  {
    for (int row = 0; row < HEIGHT; row++) {
        for (int col = 0; col < WIDTH; col++) {
            cout << board[row][col];
        }
        cout << endl;
        
    }
}
