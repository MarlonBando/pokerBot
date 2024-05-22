#include "../include/card.h"

Card::Card() : _value('2'), _suit(SPADES)
{}

Card::Card(char value, std::string suit) : _value(value), _suit(suit)
{}

char Card::getValue() const
{
    return _value;
}

int Card::getIntValue() const
{
    switch (_value)
    {
    case 'A':
        return 14;
    case 'K':
        return 13;
    case 'Q':
        return 12;
    case 'J':
        return 11;
    case 'T':
        return 10;
    default:
        return _value - '0';
    }
}

std::string Card::toString() const
{
    return std::string(1, _value) + _suit;
}

bool Card::operator== (const Card& other) const
{
    return this->getIntValue() == other.getIntValue();
}

bool Card::operator< (const Card& other) const
{
    return this->getIntValue() < other.getIntValue();
}

bool Card::operator> (const Card& other) const
{
    return other < *this; 
}

bool Card::operator<= (const Card& other) const
{
    return !(other < *this);
}

bool Card::operator>= (const Card& other) const
{
    return !(*this < other);
}