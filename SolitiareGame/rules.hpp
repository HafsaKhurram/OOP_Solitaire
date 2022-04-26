#include<SDL.h>
#include "drawing.hpp"
#include "buttons.hpp"

class rules:public buttons{
    SDL_Rect srcRect_w, moverRect_w;
    SDL_Rect srcRect_i, moverRect_i;

    public:

    void draw_icon(int x, int y);
    void draw_WINDOW(int x, int y);

};