// hackjack - the blackjack card counting simulator
// Andrew D. McGuire 2017
// amcguire227@gmail.com

#include <iostream>
#include <string>
#include "../include/Card.h"
#include "../include/Hand.h"
#include "../include/Player.h"

using namespace std;

int main() {
  cout << "-----------------------------" << endl;
  cout << "     Welcome to hackjack     " << endl;
  cout << "-----------------------------" << endl;

  //test the card class
  Card mycard('h',"Q");
  cout << "mycard.suit = " << mycard.suit <<endl;
  cout << "mycard.value = " << mycard.value <<endl;

  //test the hand class
  vector<Card> mycards;
  mycards.push_back(mycard);
  Hand myHand(mycards);
  myHand.show();
  Card my_other_card('d', "9");
  myHand.addCard(my_other_card);
  myHand.show();

  //test the player class
  Player p1("Andrew",10.00);
  cout << "p1's name is: " << p1.name << endl;
  
  return 0;
}
