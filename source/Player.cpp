// hackjack - the blackjack card counting simulator
// Andrew D. McGuire 2017
// amcguire227@gmail.com
// Player class

#include "Player.h"
#include "Hand.h"
#include "Card.h"


Player::Player (string n, double m)
  : name(n), money(m), active_hand(0)
{};

void Player::addHand (Hand H) {};

void Player::addCard (Card C) {};


