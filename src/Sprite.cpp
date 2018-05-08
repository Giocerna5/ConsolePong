#include "Sprite.hpp"

bool CSprite::Init(double xPos, double yPos, string sFilename)
{
    if(!_Texture.loadFromFile(sFilename))
        return false;

    else
    {
        _Sprite.setTexture(_Texture);
        _Sprite.setPosition(xPos, yPos);
    }

    return true;
}

void CSprite::Move(double xPos, double yPos)
{
    _Sprite.move(xPos, yPos);
}

void CSprite::Render(RenderWindow *_Window)
{
    _Window->draw(_Sprite);
}
