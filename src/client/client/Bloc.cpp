#include <math.h>
#include <string>
#include "Bloc.h"
#include "functions.h"


namespace client {

  void Bloc::setBloc (int bloc) //convertit un indice du tableau de la map en un bloc affichable à l'écran
  {
    std::string tileVector[] = {"","tile_0073","tile_0033","","tile_0121","tile_0122","tile_0123","tile_0021","tile_0022","tile_0023","tile_0153","tile_0154","tile_0155","tile_0038","tile_0018"};
    if (tileVector[bloc] != "")
    {
      this->oneBlocTexture.loadFromFile("../res/"+tileVector[bloc]+".png");
      this->id = bloc;
    }
  }

  void Bloc::drawBloc (sf::RenderWindow &s, int i)
  {
    this->oneBloc.setTexture(this->oneBlocTexture);
    this->oneBloc.setScale(2,2);
    this->oneBloc.setPosition((BLOC_SIZE*i)%(BLOC_SIZE*MAP_WIDTH),floor(i/MAP_WIDTH)*BLOC_SIZE);  //convertir une position 1D en position cartésienne
    s.draw(this->oneBloc);
  }

}
