#ifndef MAP_H_INCLUDED
#define MAP_H_INCLUDED



class Map{
private:
    char m_map[20][20];
public:
    Map();
    void set_tile(int x, int y);
    char get_tile(int x int y);


};


#endif // MAP_H_INCLUDED
