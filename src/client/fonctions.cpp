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

sf::VideoMode mode = sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT);
sf::RenderWindow scene(mode, "Tanks Battle !");
sf::Texture backgroundTexture;
sf::Sprite background;
sf::Event event;

client::Bloc b[6];

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


    b[0].setBloc(4);
    b[0].drawBloc(scene,208,236);
    b[1].setBloc(5);
    b[1].drawBloc(scene,244,236);
    b[2].setBloc(6);
    b[2].drawBloc(scene,280,236);
    b[3].setBloc(7);
    b[3].drawBloc(scene,208,200);
    b[4].setBloc(8);
    b[4].drawBloc(scene,244,200);
    b[5].setBloc(9);
    b[5].drawBloc(scene,280,200);

    //b.oneBloc.setPosition(100,200);
    //scene.draw(b.oneBloc);


    scene.display();
  }
}
