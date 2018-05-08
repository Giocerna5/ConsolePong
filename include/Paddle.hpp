#ifndef PADDLE_H
#define PADDLE_H

#include "SFML\Graphics.hpp"
#include <iostream>

using namespace std;

using namespace sf;
class Paddle
{
    private:
        int x, y;
        int originalX, originalY;

    public:
        Paddle();
        void reset();
        void Render(RenderWindow *_Window);
};
#endif
