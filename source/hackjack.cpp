// hackjack - the blackjack card counting simulator
// Andrew D. McGuire 2017
// amcguire227@gmail.com

#include <iostream>
#include <string>
#include "Card.h"
#include "Hand.h"
#include "Player.h"
#include "Deck.h"
#include "Game.h"

using namespace std;

int main() {
  cout << "-----------------------------" << endl;
  cout << "     Welcome to hackjack     " << endl;
  cout << "-----------------------------" << endl;

  //set-up iostream to print bools as true/false
  std::cout << std::boolalpha;
  
  //test the card class
  // Card myCard('h',"Q");
  // cout << "myCard.suit = " << myCard.suit <<endl;
  // cout << "myCard.value = " << myCard.value <<endl;

  //test the hand class
  // vector<Card> myCards;
  // myCards.push_back(myCard);
  // Hand myHand(myCards);
  // myHand.show();
  // Card my_other_card('d', "9");
  // myHand.addCard(my_other_card);
  // myHand.show();

  //test the player class
  Player Andrew("Andrew",10.00);
  // cout << "Andrew's name is: " << Andrew.name << endl;

  // test the Dealer
  Dealer Dealer;
  // cout << "Dealer's name is: " << Dealer.name << endl;
  
  //test hand and card addition for player
  // Andrew.addHand(myHand);
  // Andrew.showHand();
  // Andrew.showHandValue();
  // cout << "Bust? " << Andrew.isBust() << endl;
  // Andrew.addCard(myCard);
  // Andrew.showHandValue();
  // cout << "Bust? " << Andrew.isBust() << endl;

  //testing player specific functionality
  // Andrew.Bet(5.0);
  // Andrew.showBets();
  // Andrew.Bet(6.0);
  // Andrew.showBets();

  //testing the deck class
  // Deck deck(1,3.0/52.0);
  // Card mytopcard = deck.draw();  
  // cout << "mytopcard = ", mytopcard.show();
  // cout << endl;
  // cout << "deck = ", deck.show();
  // Card mytopcard2 = deck.draw();  
  // cout << "mytopcard2 = ", mytopcard2.show(); 
  // cout << endl;
  // cout << "deck = ", deck.show();
  // Card mytopcard3 = deck.draw();
  // cout << "mytopcard3 = ", mytopcard3.show();
  // cout << endl;
  // cout << "deck = ", deck.show();
  // Card mytopcard4 = deck.draw();
  // cout << "mytopcard4 = ", mytopcard4.show();
  // cout << endl;
  // cout << "deck = ", deck.show();

  // testing the game class
  vector<Player> players;
  Player p2("Alice",15.0);
  Player p3("Bob",29.0);
  players.push_back(Andrew);
  players.push_back(p2);
  players.push_back(p3);
  Deck GameDeck(4);
  Game GameTest(players,Dealer,GameDeck);
  GameTest.show();
  GameTest.hit_or_stick();


  cout << "testing complete!" << endl;
  return 0;
}
