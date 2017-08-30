#ifndef CARD_H
#define CARD_H

#include <string>
using namespace std;

class Card
{
 public:
  Card();
  Card(char s, string v);
  void show();
  char suit;
  string value;
 protected:
 private:
};

#endif // CARD_H
