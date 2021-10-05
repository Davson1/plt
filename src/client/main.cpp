#include <iostream>
#include <SFML/Graphics.hpp>
#include <client/GUI.h>



//client::GUI gui;

int main(int argc,char* argv[])
{

  sf::RenderWindow scene;
  sf::Texture backgroundTexture;
  sf::Sprite background;

  //scene.setSize(sf::Vector2f(800, 480));
  scene.setFramerateLimit(60);
  scene.setVerticalSyncEnabled(true);
  backgroundTexture.loadFromFile("../res/wallpaper.png");
  background.setTexture(backgroundTexture);
  while (scene.isOpen())
  {
    sf::Event event;
    while (scene.pollEvent(event))
    {
        // "close requested" event: we close the window
        if (event.type == sf::Event::Closed)
            scene.close();
    }

    scene.clear(sf::Color(0,0,0));
    scene.draw(background);
    scene.display();
  }


    //gui.start();
    //graphics.refresh();
    return 0;
}
