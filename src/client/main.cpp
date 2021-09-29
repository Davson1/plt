#include <iostream>
#include <SFML/Graphics.hpp>
#include <state.h>

void testSFML() {
    sf::Texture texture;
}


using namespace std;
using namespace state;

int main(int argc,char* argv[])
{
    Exemple exemple;
    exemple.setX(53);

    cout << "Lancement du jeu" << endl;
    sf::Window window(sf::VideoMode(800, 600), "Fenetre test");
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
    }
    return 0;
}
