//
// Created by Eden Bar on 21/04/2023.
//

#ifndef PACMAN_GAME_PACMAN_H
#define PACMAN_GAME_PACMAN_H


class Pacman {
    
    int lives = 3;
    int move_speed = 2;
    int x_pos = 40;
    int y_pos = 12;
public:
    
    Pacman();
    
    void move();
    
    void eat();
    
    void die();
    
    void print();
    
};


#endif //PACMAN_GAME_PACMAN_H
