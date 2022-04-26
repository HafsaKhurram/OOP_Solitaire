#include "cards.hpp"
#include<SDL.h>
#include "drawing.hpp"
#pragma once
class clubs: public Cards{

    SDL_Rect Drawing_rect;
    SDL_Rect mover;
    public:

    clubs( int pos, int n);

    void draw(int x, int y);

};