#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

class Game{
private:
    int score;
    Map m_map;

public:
    Game();
    int get_score();
    bool play();
    void update_screen();

};


#endif // GAME_H_INCLUDED
