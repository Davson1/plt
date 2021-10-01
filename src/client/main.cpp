#include <iostream>
#include <SFML/Graphics.hpp>
#include <state.h>
#include <client/Window.h>
using namespace std;
using namespace state;




int main(int argc,char* argv[])
{

    cout << "Lancement du jeu" << endl;
    sf::RenderWindow window(sf::VideoMode(800, 480), "Tanks");
    window.setFramerateLimit(60);
    window.setVerticalSyncEnabled(true);

    sf::Texture backgroundTexture;
    sf::Sprite background;
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

        window.clear(sf::Color(0,0,0));
        window.draw(background);
        window.display();

    }
    return 0;
}
