#ifndef SPRITE_H
#define SPRITE_H

#include "SFML\Graphics.hpp"

using namespace std;
using namespace sf;

class CSprite
{
    public:
        bool Init(double xPos, double yPos, string sFilename);
        void Move(double xPos, double yPos);
        void Render(RenderWindow *_Window);


    private:
        Texture _Texture;
        Sprite _Sprite;

};


#endif // SPRITE_H

