#include <iostream>
#include "../include/card.h"
#include "../include/deck.h"

using namespace std;

int main(){
    cout << ">>> POKER BOT STARTED..." << endl;

    Deck deck = Deck();

    cout << ">>> Deck: " +  deck.toString();

    cout << ">>> shuffling..." << endl;
    deck.shuffle();
    cout << ">>> shuffling... completed" << endl; 

    cout << ">>> Deck: " +  deck.toString() << endl;
    
    cout << ">>> shuffling..." << endl;
    deck.shuffle();
    cout << ">>> shuffling... completed" << endl; 

    cout << ">>> Deck: " +  deck.toString() << endl;

    Card p1card1 = deck.deal();
    Card p2card1 = deck.deal();
    Card p1card2 = deck.deal();
    Card p2card2 = deck.deal();

    


    cout << ">>> Player 1 hand: " << p1card1.toString() << " " << p1card2.toString() << endl;
    cout << ">>> Player 1 hand: " << p2card1.toString() << " " << p2card2.toString() << endl;

    deck.burn();

    cout << ">>>" << deck.deal().toString() << " " << deck.deal().toString() << " " << deck.deal().toString() << " " ;
    deck.burn();
    cout << deck.deal().toString() << " ";
    deck.burn();
    cout << deck.deal().toString();

    return 0;
}