#include "Game.h"


    Game::Game(){

    };
    int Game::get_score();
    bool Game::play(){
        return false;
    };
    void Game::update_screen(){

    };
    int Game::get_score(){
        return m_snake.get_length();
    };
