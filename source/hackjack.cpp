// hackjack - the blackjack card counting simulator
// Andrew D. McGuire 2017
// amcguire227@gmail.com

#include <iostream>
#include <string>
#include "Card.h"
#include "Hand.h"
#include "Player.h"

using namespace std;

int main() {
  cout << "-----------------------------" << endl;
  cout << "     Welcome to hackjack     " << endl;
  cout << "-----------------------------" << endl;

  //set-up iostream to print bools as true/false
  std::cout << std::boolalpha;
  
  //test the card class
  Card myCard('h',"Q");
  cout << "myCard.suit = " << myCard.suit <<endl;
  cout << "myCard.value = " << myCard.value <<endl;

  //test the hand class
  vector<Card> myCards;
  myCards.push_back(myCard);
  Hand myHand(myCards);
  myHand.show();
  Card my_other_card('d', "9");
  myHand.addCard(my_other_card);
  myHand.show();

  //test the player class
  Player p1("Andrew",10.00);
  cout << "p1's name is: " << p1.name << endl;

  // test the Dealer
  Dealer Dealer;
  cout << "Dealer's name is: " << Dealer.name << endl;

  //test hand and card addition for player
  p1.addHand(myHand);
  p1.showHand();
  p1.showHandValue();
  cout << "Bust? " << p1.isBust() << endl;
  p1.addCard(myCard);
  p1.showHandValue();
  cout << "Bust? " << p1.isBust() << endl;
  return 0;
}
