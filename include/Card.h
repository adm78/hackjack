#ifndef CARD_H
#define CARD_H

#include <string>
using namespace std;

class Card
{
 public:
  Card(char s, string v);  
  char suit;
  string value;
 protected:
 private:
};

#endif // CARD_H
