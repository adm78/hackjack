// hackjack - the blackjack card counting simulator
// Andrew D. McGuire 2017
// amcguire227@gmail.com
// Player class

#include "Player.h"
#include "Hand.h"
#include "Card.h"

Person::Person (string n)
  // the base class constructor
  : name(n), active_hand(0)
{};

void Person::addHand (Hand H) {};

void Person::addCard (Card C) {};

Player::Player (string n, double m)
  // the Player class constructor
  : Person(n), money(m)
{};

Dealer::Dealer ()
  // the dealer class constructor
  : Person("dealer")
{};



