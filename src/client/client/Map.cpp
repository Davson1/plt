#include "Bloc.h"
#include "functions.h"

namespace client {

  Map::Map (int* m)
  {
    int i;
    for(i=0;i<MAP_SIZE;i++)
    {
      this->bloc[i].setBloc(m[i]);
    }
  }

  void Map::drawMap (sf::RenderWindow &s)
  {
    int i;
    for(i=0;i<MAP_SIZE;i++)
    {
      this->bloc[i].drawBloc(s,i);
    }
  }

}
