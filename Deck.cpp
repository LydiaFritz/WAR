#include "Deck.h"
#include <algorithm>
#include <ctime>

Deck::Deck()
{
	srand(time(NULL));
	//stock the deck
	for (int i = 2; i <= 14; i++)
	{
		theCards.push_back(Card(i, "Clubs"));
		theCards.push_back(Card(i, "Hearts"));
		theCards.push_back(Card(i, "Spades"));
		theCards.push_back(Card(i, "Diamonds"));
	}
}

Card Deck::dealCard()
{
	Card c = theCards.back();
	//remove the card from the deck
	theCards.pop_back();
	return c;
}

void Deck::shuffle()
{
	random_shuffle(theCards.begin(), theCards.end());
}
