#include "Map.h"


    Map::Map(){
        for(int i = 0; i< 20 ; i++){
            for(int j = 0; j<20; j++){
                if(i==0||i==19) m_map[i][j] = '=';
                elseif(j==0||j==19) = '=';
            }
        }
    };
    void Map::set_tile(int x, int y){

    };
    char Map::get_tile(int x int y){

    };
