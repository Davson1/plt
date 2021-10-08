#include "Bloc.h"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

namespace client {

  void Bloc::setSprite (int sprite)
  {
    switch(sprite)
    {
      case 1 : this->imagePath = "../res/tile_0073.png";
      case 2 : this->imagePath = "../res/tile_0033.png";
      case 3 : this->imagePath = "../res/tile_0021.png";
      case 4 : this->imagePath = "../res/tile_0121.png";
      case 5 : this->imagePath = "../res/tile_0122.png";
      case 6 : this->imagePath = "../res/tile_0123.png";
      case 7 : this->imagePath = "../res/tile_0021.png";
      case 8 : this->imagePath = "../res/tile_0022.png";
      case 9 : this->imagePath = "../res/tile_0023.png";
      default : this->imagePath = "";
    }
  }

  void Bloc::drawSprite (int x, int y)
  {
    sf::Texture oneBlocTexture;
    sf::Sprite oneBloc;
    oneBlocTexture.loadFromFile("../res/tile_0022.png");
    oneBloc.setTexture(oneBlocTexture);
    oneBloc.setPosition(x,y);
  }

}
