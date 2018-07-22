#include "Snake.h"

    Snake::Snake(Map* mp){
    m_map = mp;
    };
    Snake::~Snake(){

    };
    int Snake::get_length(){

    };
    int Snake::get_y_pos(int element){
    return m_body[element].y;
    };
    int Snake::get_x_pos(int element){
    return m_body[element].x;
    };
    void Snake::add_head(int x, int y){
        pos p
        p.x = x;
        p.y = y;
        m_bady.insert(m_body.begin(),p)
    };
    void Snake::move_snake(int x, int y){
        for( int i = 0; i<m_body.size();i++){
            // move each element to a temp variable and replace the previous
            // element with the first.
        }

    };
