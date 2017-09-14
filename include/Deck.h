// hackjack - the blackjack card counting simulator
// Andrew D. McGuire 2017
// amcguire227@gmail.com
// Deck class header

#ifndef DECK_H
#define DECK_H

#include <string>
#include <vector>
#include "Card.h"

using namespace std;

class Deck {
 public:

  //methods
  Deck(int size, double cut=0.25);
  void shuffle();
  Card draw();
  void show();
  
  //members
  vector<Card> cards;
  
 private:
  //methods 
  void cut(double frac);
  void renew();
  int init_size;
  double cut_pos;
};






#endif // DECK_H
