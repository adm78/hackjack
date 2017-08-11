// hackjack - the blackjack card counting simulator
// Andrew D. McGuire 2017
// amcguire227@gmail.com
// Player class

#include "Player.h"
#include "Hand.h"
#include "Card.h"
#include <iostream>
using namespace std;

Person::Person (string n)
  // the base class constructor
  : name(n), active_hand(0)
{};

void Person::showHand () {
  Hands[active_hand].show();
};

void Person::showHandValue () {
  cout << Hands[active_hand].value()
       << endl;
};

void Person::addHand (Hand H) {
  Hands.push_back(H);
};

void Person::addCard (Card C) {
  Hands[active_hand].addCard(C);
};

void Person::clearHands() {
  Hands.clear();
};

bool Person::isBust() {
  if (Hands[active_hand].value() > 21) {
    return true;
  }
  else {
    return false;
  }
};

Player::Player (string n, double m)
  // the Player class constructor
  : Person(n), money(m)
{};

Dealer::Dealer ()
  // the dealer class constructor
  : Person("dealer")
{};



