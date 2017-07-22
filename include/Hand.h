#ifndef HAND_H
#define HAND_H

#include "Card.h"
#include <vector>

using namespace std;

class Hand
{
 public:

  Hand(vector<Card> Cards);
  Hand();
  
  void addCard(Card C);
  void show();
  int value();
  
  vector<Card> Cards;

 protected:
 private:
};

#endif // HAND_H
