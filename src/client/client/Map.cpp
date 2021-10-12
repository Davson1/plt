#include "Bloc.h"
#include "fonctions.h"


namespace client {

  void Map::setMap (int* m)
  {
    int i;
    for(i=0;i<GRID_WIDTH*GRID_HEIGHT;i++)
    {
      this->b[i].setBloc(m[i]);
    }
  }

  void Map::drawMap (sf::RenderWindow &s)
  {
    int i;
    for(i=0;i<GRID_WIDTH*GRID_HEIGHT;i++)
    {
      this->b[i].drawBloc(s,i);
    }
  }

}
