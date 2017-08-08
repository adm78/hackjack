#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "Card.h"
#include "Hand.h"


using namespace std;

class Person {
 /* Abastract class */
 public:
  
  Person(string name);
  void addCard(Card C);
  void addHand(Hand H);
  
  string name;
  vector<Hand> hands;
    
 private:
  int active_hand;
 protected:
};

class Player: public Person {
 public:

  // constructor
  Player(string name, double money);

  // methods

  double money;
  //int active_hand;
  
 protected:
 private:
};

class Dealer: public Person {
 public:
  //constructor
  Dealer();

 private:
 protected:
};

#endif // PLAYER_H
