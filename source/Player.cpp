// hackjack - the blackjack card counting simulator
// Andrew D. McGuire 2017
// amcguire227@gmail.com
// Player class

#include "Player.h"
#include "Hand.h"
#include "Card.h"
#include <iostream>
#include <vector>

using namespace std;

Person::Person (string n)
  // the base class constructor
  : name(n), active_hand(0)
{};

void Person::showHand () {
  if (!Hands.empty()) {
    Hands[active_hand].show();
  };
};

void Person::showHandValue () {
  cout << Hands[active_hand].value();
};

void Person::addHand (Hand H) {
  Hands.push_back(H);
};

void Person::addCard (Card C) {
  if (Hands.empty()) {
    Hand FirstHand;
    Hands.push_back(FirstHand);
  }
  Hands[active_hand].addCard(C);
};

void Person::clearHands() {
  if (!Hands.empty()) {
    Hands.clear();
  }
};

void Person::nextHand() {
  //upates the active_hand
  if (active_hand >= Hands.size()-1) {
    active_hand = 0;
  }
  else {
    active_hand = active_hand + 1;
  }
};

int Person::getActiveHand() {
  return active_hand;
}

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

void Player::Bet(float m) {
  // add to the  bet associated with the
  // active hand. If not bet exists for
  // for the active hand then we add one.
  int ah = getActiveHand();
  if (bets.size() >  ah) {
    bets[ah] += m;
  }
  else {
    bets.push_back(m);
  }
};

void Player::showBets () {
  for (int i=0; i<bets.size(); ++i)
    cout << bets[i] << " ";
  cout << endl;
};

Dealer::Dealer ()
  // the dealer class constructor
  : Person("dealer")
{};



