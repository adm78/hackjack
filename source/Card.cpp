// This is a library file for the card class

#include <iostream>
#include "Card.h"
using namespace std;

Card::Card () {};

Card::Card (char s, string v)
  : suit(s), value(v)
{};

void Card::show() {
  cout << value << suit;
};
