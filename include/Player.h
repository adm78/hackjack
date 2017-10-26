// hackjack - the blackjack card counting simulator
// Andrew D. McGuire 2017
// amcguire227@gmail.com
// Player class definition

#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "Card.h"
#include "Hand.h"


using namespace std;

class Person {
 /* Abstract class */
 public:

  //methods
  Person(string name);
  void addCard(Card C);
  void addHand(Hand H);
  void showHand();
  void clearHands();
  int  handValue();
  void showHandValue();
  bool isBust();
  void nextHand();
  int  getActiveHand();
  bool hasMoreHands();
  
  //attributes
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
  void Collect(float m);
  void showBets();
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
  void nextHand();
  
 private:
 protected:
};

#endif // PLAYER_H
