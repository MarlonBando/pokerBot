#ifndef CARD_H
#define CARD_H

#include "suits.h"
#include <string>

class Card {
    std::string _suit;
    char _value;

public:
    Card();
    Card(char value, std::string suit);
    char getValue() const;
    int getIntValue() const;
    std::string toString() const;
    bool operator== (const Card& other) const;
    bool operator< (const Card& other) const;
    bool operator> (const Card& other) const;
    bool operator<= (const Card& other) const;
    bool operator>= (const Card& other) const;
};

#endif // CARD_H