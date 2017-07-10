// hackjack - the blackjack card counting simulator
// Andrew D. McGuire 2017
// amcguire227@gmail.com


#include <iostream>
#include <string>
#include "Card.h"
#include "Hand.h"

using namespace std;

int main() {
  cout << "Welcome to hackjack" << endl;

  //test the card class
  Card mycard('h',"Q");
  cout << "mycard.suit = " << mycard.suit <<endl;
  cout << "mycard.value = " << mycard.val <<endl;

  //test the hand class
  vector<Card> mycards;
  mycards.push_back(mycard);
  Hand myHand(mycards);
  myHand.show();
  Card my_other_card('d', "9");
  myHand.addCard(my_other_card);
  myHand.show();		
  return 0;
}
