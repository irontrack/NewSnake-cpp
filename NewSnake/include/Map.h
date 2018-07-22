#ifndef MAP_H
#define MAP_H


class Map
{
    public:
        Map();
        virtual ~Map();

    private:
        char m_screen[5][5];
        Game *m_game(this);
        Snake m_snake;


};

#endif // MAP_H
