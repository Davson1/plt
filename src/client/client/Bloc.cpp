#include "Bloc.h"
#include "fonctions.h"
#include <math.h>

namespace client {

  void Bloc::setBloc (int b) //convertit un indice du tableau de la map en un bloc affichable à l'écran
  {
    switch(b)
    {
      case 0x1 : this->imagePath = "../res/tile_0073.png";  break;
      case 0x2 : this->imagePath = "../res/tile_0033.png";  break;
      case 0x4 : this->imagePath = "../res/tile_0121.png";  break;
      case 0x5 : this->imagePath = "../res/tile_0122.png";  break;
      case 0x6 : this->imagePath = "../res/tile_0123.png";  break;
      case 0x7 : this->imagePath = "../res/tile_0021.png";  break;
      case 0x8 : this->imagePath = "../res/tile_0022.png";  break;
      case 0x9 : this->imagePath = "../res/tile_0023.png";  break;
      case 0xA : this->imagePath = "../res/tile_0153.png";  break;
      case 0xB : this->imagePath = "../res/tile_0154.png";  break;
      case 0xC : this->imagePath = "../res/tile_0155.png";  break;
      case 0xD : this->imagePath = "../res/tile_0038.png";  break;
      case 0xE : this->imagePath = "../res/tile_0018.png";  break;
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
    this->oneBloc.setPosition((BLOC_SIZE*i)%(BLOC_SIZE*GRID_WIDTH),floor(i/GRID_WIDTH)*BLOC_SIZE);  //convertir une position 1D en position cartésienne
    s.draw(this->oneBloc);
  }

}
