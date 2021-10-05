#include <SFML/Graphics.hpp>
#include <iostream>
//#include "gui.h"



void start ()
{
  sf::RenderWindow scene(sf::VideoMode(800, 480), "Tanks");
  sf::Texture backgroundTexture;
  sf::Sprite background;

  scene.setFramerateLimit(60);
  scene.setVerticalSyncEnabled(true);
  backgroundTexture.loadFromFile("../res/wallpaper.png");
  background.setTexture(backgroundTexture);
}

void refresh ()
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
