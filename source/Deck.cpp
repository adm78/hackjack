// hackjack - the blackjack card counting simulator
// Andrew D. McGuire 2017
// amcguire227@gmail.com
// Deck class

#include <iostream>
#include <string>
#include <algorithm>
#include <random>
#include <vector>
#include "Card.h"
#include "Deck.h"

using namespace std;

Deck::Deck (int s, double cut) {
  vector<string> values = {"2","3","4",
			   "5","6","7",
			   "8","9","10",
			   "J","Q","K", "A"};
  vector<char> suits = {'d','c','h','s'};
  for (int i=0; i<s; i++) {
    for (int j=0; j<suits.size(); j++) {
      for (int k=0; k<values.size(); k++) {
	cards.push_back(Card(suits[j],values[k]));
      };
    };
  };
  this->cut(cut);
};


void Deck::shuffle () {
  auto rng = std::default_random_engine {};
  std::shuffle(std::begin(cards), std::end(cards), rng);
};

void Deck::cut(double frac) {
  cards.erase(cards.begin() + cards.size()*frac, cards.end());
};

Card Deck::draw() {
  return Card('s',"A");
};

void Deck::show() {
    for (int i=0; i<cards.size(); ++i)
    cout << cards[i].value << cards[i].suit
	 << " ";
    cout << endl;
};
