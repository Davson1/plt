#include <string>
#include "Player.h"

namespace client {

  Player::Player(int type,int x,int y)
  {
    std::string typeVector[] = {"tankGreen3","tankNavy3","tankGrey3"};
    this->onePlayerTexture.loadFromFile("../res/"+typeVector[type]+".png");
    this->type = type;
    this->x = x;
    this->y = y;
  }

  void Player::goForward(void)
  {
    this->x = this->x + 1;
  }

  void Player::goBackward(void)
  {
    this->x = this->x - 1;
  }

  void Player::drawPlayer(sf::RenderWindow &s)
  {
    this->onePlayer.setTexture(this->onePlayerTexture);
    this->onePlayer.setOrigin({this->onePlayer.getLocalBounds().width/2,this->onePlayer.getLocalBounds().height});
    //this->onePlayer.setScale(-1,1);
    this->onePlayer.setPosition(this->x,this->y);
    s.draw(this->onePlayer);
  }

}
