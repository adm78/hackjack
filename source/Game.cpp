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
#include <ctype.h>

using namespace std;

Game::Game (vector<Player> p, Dealer d, Deck dc):
  players(p), dealer(d), deck(dc)
{
  // main game constructor
  clearTable();
  cp = &players.front();
  dealAll();
};

void Game::show () {
  // rudimenrty print game state to screen
  cout << "Current players in the game:" << endl;
  for(std::vector<Player>::iterator it = players.begin(); it != players.end(); ++it) {
    cout << (*it).name << " : ";
    (*it).showHand();
  }
  cout << "Dealer : ";
  dealer.showHand();
};

void Game::clearTable() {
  // wipes all player and dealer hands
  for(std::vector<Player>::iterator it = players.begin(); it != players.end(); ++it) {
    (*it).clearHands();
  }
  dealer.clearHands();
};

void Game::dealAll () {
  // deal first two cards to all players
  for(std::vector<Player>::iterator it = players.begin(); it != players.end(); ++it) {
    (*it).addCard(deck.draw());
    (*it).addCard(deck.draw());
  }
  dealer.addCard(deck.draw());
  dealer.addCard(deck.draw());
};

void Game::dealTo (Player* p) {
  // deal a single cards player using pointer
  p->addCard(deck.draw());
};

void Game::dealTo (std::vector<Player>::iterator& p) {
  // deal a single cards player iterator ref
  p->addCard(deck.draw());
};

void Game::hit_or_stick() {
  
  char answer;

  Card card;
  bool hands_to_process = true;

  // player loop
  for (std::vector<Player>::iterator player = players.begin(); player != players.end(); ++player) {

    cout << "current player name is " << player->name << endl;
    // player hand loop
    while (hands_to_process) {

      // process the current hand
      answer = 'h';
      while (answer == 'h' and not (player->isBust() or player->handValue() == 21)) {
	cout << player->name << ", would you like to hit or stick? (h/s): ";
	cin >> answer;
	if (tolower(answer) == 'h') {
	  dealTo(player);
	  player->showHand();
	  if (player->isBust()) {
	    cout << "Whoops! " << player->name << "'s bust on this hand";
	    cout << endl;
	  }
	}
      }
      
      // move to the next hand (if any)
      hands_to_process = player->hasMoreHands();
      player->nextHand(); //will go back to first if it's the last Hand

    }
    hands_to_process = true;      
  };
 
};
