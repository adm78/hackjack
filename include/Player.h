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
  void showHand();
  void clearHands();
  void showHandValue();
  bool isBust();

  string name;
  vector<Hand> Hands;
    
 private:
  int active_hand;
 protected:
};

class Player: public Person {
 public:

  // constructor
  Player(string name, double money);

  // methods
  void Bet(float m);
  void nextHand();
  void Collect(float m);
  
  //int active_hand;
  
 protected:
 private:
    double money;
    vector <float> bets;
};

class Dealer: public Person {
 public:
  //constructor
  Dealer();

 private:
 protected:
};

#endif // PLAYER_H
