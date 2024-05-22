#include "card.h"
#include <array>
#include <string>
#include <algorithm>
#include <random>
#include <sstream>

class Deck{

    std::array<Card,DECK_SIZE> _cards;
    int8_t _currentIndex;
public:
    Deck();
    void shuffle();
    Card deal();
    void burn();
    std::string toString() const;
};