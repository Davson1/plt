#include <iostream>
#include <SFML/Graphics.hpp>
#include <state.h>
#include <client/Window.h>



//Window window = new Window();

int main(int argc,char* argv[])
{
    //window.start();
    sf::RenderWindow window(sf::VideoMode(800, 480), "Tanks");
    sf::Texture backgroundTexture;
    sf::Sprite background;

    window.setFramerateLimit(60);
    window.setVerticalSyncEnabled(true);
    backgroundTexture.loadFromFile("../res/wallpaper.png");
    background.setTexture(backgroundTexture);

    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        //window.refresh();
        window.clear(sf::Color(0,0,0));
        window.draw(background);
        window.display();


    }
    return 0;
}
