#include <iostream>
#include "../include/card.h"

using namespace std;

int main(){
    cout << ">>> POKER BOT STARTED..." << endl;

    Card card1 = Card('K',HEARTS);
    Card card2 = Card('8',CLUBS);

    cout << card1.toString() + " VS " + card2.toString() << endl;
    cout << to_string(card1 > card2);

    return 0;
}