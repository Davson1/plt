#include "fonctions.h"

sf::RenderWindow scene(sf::VideoMode(800, 480), "Tanks Battle !");
sf::Texture backgroundTexture;
sf::Sprite background;
sf::Event event;

//client::Bloc()

void refresh(void)
{
  scene.setFramerateLimit(60);
  scene.setVerticalSyncEnabled(true);
  backgroundTexture.loadFromFile("../res/wallpaper.png");
  background.setTexture(backgroundTexture);
  while (scene.isOpen())
  {
    if (scene.pollEvent(event)) // "close requested" event: we close the window
    {
        if (event.type == sf::Event::Closed)  scene.close();
    }
    scene.clear(sf::Color(0,0,0));
    scene.draw(background);


    //b.setSprite(4);
    //b.drawSprite((i*32)%20,floor((i*32)/20));

    scene.display();
  }
}
