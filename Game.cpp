//
// Created by Eden Bar on 21/04/2023.
//

#include "Game.h"
#include "Board.h"
#include <iostream>
using namespace std;
Game::Game() {

    // Present the menu
    cout << "Welcome to Pacman!" << endl;
    cout << "1. Start a new Game" << endl;
    cout << "2. Present instructions and keys" << endl;
    cout << "3. Quit" << endl;

    int choice;
    cin >> choice;
    
    // Start a new game
    if (choice == 1)
        start();
    if(choice == 2)
        print_InstAndKeys();
    if(choice == 3)
        exit(0);
    else
        /////////// NEED to inpement errors ! /////////
        cout << "Invalid input" << endl;
    
    
}

void Game::start() {
    // Start the game
    Board board;
    board.print();
    
}

void Game::print_InstAndKeys() {
    // Print the instructions and keys
    cout << "Instructions:" << endl;
    cout << "Eat all the dots to win the game." << endl;
    cout << "Use the keys to move." << endl;
    cout << "Keys:" << endl;
    cout << "W arrow - move up" << endl;
    cout << "X arrow - move down" << endl;
    cout << "A arrow - move left" << endl;
    cout << "D arrow - move right" << endl;
    cout << "S arrow - stay" << endl;
    
}
