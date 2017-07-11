#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "Card.h"
#include "Hand.h"


using namespace std;

class Player
{
 public:

  // constructor
  Player(string name, double money);

  // methods
  void addHand(Hand H);
  void addCard(Card C);
  
  // attributes
  vector<Hand> hands;
  string name;
  double money;
  int active_hand;
  
 protected:
 private:
};

#endif // PLAYER_H
