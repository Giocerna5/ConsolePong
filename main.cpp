#include "Sprite.hpp"
#include "SFML\Graphics.hpp"


using namespace sf;

int main()
{
//(x,y)
    int y1 = 230;
    int y2 = 230;
    RenderWindow window(VideoMode(1000, 600), "Console Pong");

    CSprite Background;
    RectangleShape paddle1, paddle2;

    paddle1.setSize(Vector2f(10, 80));
    paddle1.setOutlineThickness(1);
    paddle1.setPosition(50, y1);

    paddle2.setSize(Vector2f(10, 80));
    paddle2.setOutlineThickness(1);
    paddle2.setPosition(950, y2);

    Background.Init(0,0, "Assets/Background.png");

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
                case Event::Closed:
                    window.close();
                    break;

                case Event::KeyPressed:
                        {
                            switch(event.key.code)
                               {
                                    case Keyboard::W:
                                        y1-=6;
                                         paddle1.setPosition(50, y1);
                                        break;
                                    case Keyboard::S:
                                        y1+=6;
                                        paddle1.setPosition(50, y1);
                                        break;
                                    case Keyboard::O:
                                        y2-=6;
                                         paddle2.setPosition(950, y2);
                                        break;
                                    case Keyboard::L:
                                        y2+=6;
                                        paddle2.setPosition(950, y2);
                                        break;
                               }
                        }

            }
        }

        window.clear();
    ///makes game run
    Background.Render(&window);

    window.draw(paddle1);
    window.draw(paddle2);



    window.display();
    }

    return 0;
}
