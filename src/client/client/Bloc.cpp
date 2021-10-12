#include "Bloc.h"
#include "fonctions.h"
#include <math.h>

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
      case 10 : this->imagePath = "../res/tile_0153.png";  break;
      case 11 : this->imagePath = "../res/tile_0154.png";  break;
      case 12 : this->imagePath = "../res/tile_0155.png";  break;
      default : break;
    }
    if (this->imagePath != "")
    {
      this->oneBlocTexture.loadFromFile(this->imagePath);
      this->oneBloc.setTexture(this->oneBlocTexture);
      this->oneBloc.setScale(2,2);
    }
  }

  void Bloc::drawBloc (sf::RenderWindow &s, int i)
  {
    this->oneBloc.setPosition((BLOC_SIZE*i)%(BLOC_SIZE*GRID_WIDTH),floor(i/GRID_WIDTH)*BLOC_SIZE);
    s.draw(this->oneBloc);
  }

}
