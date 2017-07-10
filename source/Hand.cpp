// hackjack - the blackjack card counting simulator
// Andrew D. McGuire 2017
// amcguire227@gmail.com
// Hand class
#include <iostream>
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
    cout << Cards[i].val << Cards[i].suit
	 << endl;
};




