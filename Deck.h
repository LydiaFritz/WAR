#ifndef DECK_H
#define DECK_H
#include <vector>
#include <iostream>
#include "Card.h"

using namespace std;

class Deck {
private:
	vector<Card> theCards;
public:
	Deck();
	Card dealCard();
	void shuffle();
	bool isEmpty()const { return theCards.empty(); }
};


#endif