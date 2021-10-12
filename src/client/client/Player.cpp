#include "Player.h"

namespace client {

  Player::Player(int x,int y)
  {
    this->x = x;
    this->y = y;
  }

  void Player::goForward(void)
  {
    this->x = this->x + 1;
  }

  void Player::drawPlayer(sf::RenderWindow &s)
  {
    this->onePlayerTexture.loadFromFile("../res/tanks_tankGreen3.png");
    this->onePlayer.setTexture(this->onePlayerTexture);
    this->onePlayer.setPosition(this->x,this->y);
    s.draw(this->onePlayer);
  }

}
