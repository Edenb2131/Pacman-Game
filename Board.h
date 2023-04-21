//
// Created by Eden Bar on 21/04/2023.
//
#ifndef PACMAN_GAME_BOARD_H
#define PACMAN_GAME_BOARD_H


#include <iostream>
#include "Game.h"
#include "Ghost.h"
#include "breadcrumbs.h"
#include "Pacman.h"


class Board {
    enum {WIDTH = 81, HEIGHT = 24};
    char board[HEIGHT][WIDTH];
    
public:
    Board();
    void print();
};


#endif //PACMAN_GAME_BOARD_H
