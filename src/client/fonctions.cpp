#include "fonctions.h"

int globalMap[GRID_WIDTH*GRID_HEIGHT] = {
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,7,8,8,8,8,8,8,8,
8,8,8,8,8,8,8,9,0,0,0,0,4,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,6,2,2,2,2,4,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,6,1,1,1,1,4,5,5,5,5,5,5,5};

sf::RenderWindow scene(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Tanks Battle !");
sf::Texture backgroundTexture;
sf::Sprite background;
sf::Event event;

client::Bloc b;

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


    b.setSprite(4);
    b.oneBlocTexture.loadFromFile("../res/tile_0023.png");
    b.oneBloc.setTexture(b.oneBlocTexture);
    b.oneBloc.setPosition(100,200);
    b.oneBloc.setScale(2,2);
    scene.draw(b.oneBloc);


    scene.display();
  }
}
