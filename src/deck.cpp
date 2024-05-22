#include "../include/deck.h"

Deck::Deck() : _currentIndex(0) {


    const std::string suits[] = {SPADES,CLUBS,HEARTS,DIAMONDS};
    const int8_t suitsLength = sizeof(suits) / sizeof(suits[0]);
    const char values[] = {'2','3','4','5','6','7','8','9','T','J','Q','K','A'};
    const int8_t valuesLength = sizeof(values)/sizeof(char);

    for (int8_t i = 0; i < suitsLength; i++)
    {
        for(int8_t j=0; j < valuesLength; j++)
        {
            _cards[j + valuesLength * i] = Card(values[j],suits[i]);
        }
    }
}

Card Deck::deal()
{
    if(_currentIndex + 1 < DECK_SIZE)
    {
        return _cards[_currentIndex++];
    }

    shuffle();
    throw std::out_of_range("INDEX OUT OF RANGE! _currentIndex is greater (or equal) the deck size! deck is automatically shuffled");
}

void Deck::burn()
{
    if(++_currentIndex >= DECK_SIZE)
    {
        throw std::out_of_range("INDEX OUT OF RANGE! _currentIndex is greater (or equal) the deck size! deck is automatically shuffled");
    }
}

void Deck::shuffle()
{
    std::random_device rd;
    std::mt19937 g(rd());

    std::shuffle(_cards.begin(), _cards.end(), g);
    _currentIndex = 0;
}

std::string Deck::toString() const
{
    std::stringstream deckStr;
    for (const Card card : _cards) {
        deckStr << card.toString() << " ";
    }
    return deckStr.str();
}

