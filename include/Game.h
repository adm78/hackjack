// hackjack - the blackjack card counting simulator
// Andrew D. McGuire 2017
// amcguire227@gmail.com
// Game class header
//
// Implementation notes:
//   - a game represents a single 'hand' of blackjack  
//   - a game object represents a collection of data about 
//     a specific game and the methods required to take the 
//     the game from start to completion
//   - each set of rules is represented by a class which  
//     inherets from the Game class 
//-----------------------------------------------------------

#ifndef GAME_H
#define GAME_H

#include <string>
#include <vector>
#include "Card.h"
#include "Hand.h"
#include "Player.h"
#include "Deck.h"

using namespace std;

class Game {
  /* The base game class */
 public:

  //methods
  Game(vector<Player> players, Dealer dealer, Deck deck);
  void show();
  void deal();
  void clearTable();
  
  //members
  vector<Player> players;
  Dealer dealer;

 private:
  Deck deck;
  Player* cp;
};

class ClassicBlackJack: public Game {

};






#endif // GAME_H
