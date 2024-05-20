#include "card.h"

class Card{
    const char* _suit;
    const char _value;

    public:
    Card() : _value('2'), _suit(SPADE)
    {}

    Card(char value, char* suit) : _value(value), _suit(suit)
    {}
};