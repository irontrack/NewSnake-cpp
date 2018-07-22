#ifndef SNAKE_H_INCLUDED
#define SNAKE_H_INCLUDED
#include<vector>

class Map;
struct pos{
    int x;
    int y;
};
class Snake{
private:
    Map* m_map;
    std::vector<pos> m_body;
public:
    Snake(Map* mp)
    ~Snake()
    int get_length();
    int get_y_pos(int element);
    int get_x_pos(int element);
    void add_head(int x, int y);
    void move_snake(int x, int y);


};


#endif // SNAKE_H_INCLUDED
