#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

class Snake;
class Map;
class Game{
private:
    int score;
    Map m_map;
    Snake m_snake;

public:
    Game();
    int get_score();
    bool play();
    void update_screen();

};


#endif // GAME_H_INCLUDED
