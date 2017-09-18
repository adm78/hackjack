// hackjack - the blackjack card counting simulator
// Andrew D. McGuire 2017
// amcguire227@gmail.com
// Game class
//
// Implementation notes:
//   - a game represents a single 'hand' of blackjack  
//   - a game object represents a collection of data about 
//     a specific game and the methods required to take the 
//     the game from start to completion
//   - each set of rules is represented by a class which  
//     inherets from the Game class 
//-----------------------------------------------------------
#include "Game.h"
#include "Deck.h"
#include "Player.h"
#include "Hand.h"
#include "Card.h"
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

Game::Game (vector<Player> p, Dealer d, Deck dc):
  players(p), dealer(d), deck(dc)
{
  // main game constructor
  clearTable();
  cp = &players.front();
  deal();
};

void Game::show () {
  // rudimenrty print game state to screen
  cout << "Current players in the game:" << endl;
  for(std::vector<Player>::iterator it = players.begin(); it != players.end(); ++it) {
    cout << (*it).name << " : ";
    (*it).showHand();
    cout << endl;
  }
  cout << "Dealer : ";
  dealer.showHand();
  cout << endl;
};

void Game::clearTable() {
  // wipes all player and dealer hands
  for(std::vector<Player>::iterator it = players.begin(); it != players.end(); ++it) {
    (*it).clearHands();
  }
  dealer.clearHands();
};

void Game::deal () {
  for(std::vector<Player>::iterator it = players.begin(); it != players.end(); ++it) {
    (*it).addCard(deck.draw());
    (*it).addCard(deck.draw());
  }
  dealer.addCard(deck.draw());
  dealer.addCard(deck.draw());
};