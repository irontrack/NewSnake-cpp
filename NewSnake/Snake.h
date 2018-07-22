#ifndef SNAKE_H_INCLUDED
#define SNAKE_H_INCLUDED
#include<vector>


struct pos{
    int x;
    int y;
};
class Snake{
private:
    std::vector<pos> m_body;
public:
    Snake(Map* mp)
    ~Snake()
    int get_length();
    int get_y_pos(int element);
    int get_x_pos(int element);
    void grow_snake(int x, int y);
    void move_snake(int x, int y);


};


#endif // SNAKE_H_INCLUDED
