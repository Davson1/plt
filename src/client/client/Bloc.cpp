#include "Bloc.h"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

namespace client {

  void Bloc::setBloc (int b) //convertit un indice du tableau de la map en un sprite affichable à l'écran
  {
    switch(b)
    {
      case 1 : this->imagePath = "../res/tile_0073.png";  break;
      case 2 : this->imagePath = "../res/tile_0033.png";  break;
      case 4 : this->imagePath = "../res/tile_0121.png";  break;
      case 5 : this->imagePath = "../res/tile_0122.png";  break;
      case 6 : this->imagePath = "../res/tile_0123.png";  break;
      case 7 : this->imagePath = "../res/tile_0021.png";  break;
      case 8 : this->imagePath = "../res/tile_0022.png";  break;
      case 9 : this->imagePath = "../res/tile_0023.png";  break;
      default : break;
    }
    if (this->imagePath != "")
    {
      this->oneBlocTexture.loadFromFile(this->imagePath);
      this->oneBloc.setTexture(this->oneBlocTexture);
      this->oneBloc.setScale(2,2);
    }
  }

  void Bloc::drawBloc (sf::RenderWindow &s, int x, int y)
  {
    this->oneBloc.setPosition(x,y);
    s.draw(this->oneBloc);
  }

}
