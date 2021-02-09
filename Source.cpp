#include <iostream>
#include "Card.h"
#include "Deck.h"

using namespace std;

int main() {

	Deck myDeck;
	myDeck.shuffle();
	vector<Card> p1, p2;
	while (!myDeck.isEmpty()) {
		Card c = myDeck.dealCard();
		p1.push_back(c);
		p2.push_back(c);
	}

	
	//show each player's cards
	cout << "p1: ";
	for (int i = 0; i < p1.size(); i++)
		cout << p1[i] << ' ';
	cout << endl;
	cout << "p2: ";
	for (int i = 0; i < p2.size(); i++)
		cout << p2[i] << ' ';
	cout << endl;

	//start the game
	do {



	} while (!p1.empty() && !p2.empty());

	if (p1.empty())
		cout << "Player 2 wins!" << endl;
	else
		cout << "Player 1 wins!" << endl;

	return 0;
}