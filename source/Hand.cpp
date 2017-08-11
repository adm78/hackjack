// hackjack - the blackjack card counting simulator
// Andrew D. McGuire 2017
// amcguire227@gmail.com
// Hand class

#include <iostream>
#include <string>
#include <cstdlib>
#include "Hand.h"
#include "Card.h"
#include <vector>
using namespace std;

Hand::Hand (vector<Card> C)
  : Cards(C)
{};

Hand::Hand () {};

void Hand::addCard (Card C) {
  Cards.push_back(C);
};

void Hand::show () {
  for (int i=0; i<Cards.size(); ++i)
    cout << Cards[i].value << Cards[i].suit
	 << " ";
  cout << endl;
};

int Hand::value () {
  
  int total = 0;
  int ace_count = 0;

  
  for (int i=0; i<Cards.size(); ++i) {

    // loop through all cards in the hand
    if (Cards[i].value == "J" or
	Cards[i].value == "Q" or
	Cards[i].value == "K") {

      total += 10; }
    else if (Cards[i].value == "A") {
      ace_count += 1;
    }
    else {
      total += std::atoi(Cards[i].value.c_str());
    }
  };

  // handle the aces
  for (int i=0; i<ace_count; ++i) {
    if (total < 11) {
      total += 11;
    }
    else {
      total += 1;
      }
  };

  return total;  
};



