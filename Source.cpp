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
		Card c = myDeck.dealCard();
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

		//get a card from each player
		Card c1, c2;
		c1 = p1.back();
		cout << "p1 plays " << c1 << ' ';
		p1.pop_back();
		c2 = p2.back();
		cout << "and p2 plays " << c2 << endl;
		p2.pop_back();
		if (c1 > c2)
		{
			//p1 wins
			p1.insert(p1.begin(), c1);
			p1.insert(p1.begin(), c2);
		}
		else
		{
			p2.insert(p2.begin(), c1);
			p2.insert(p2.begin(), c2);
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
		

	} while (!p1.empty() && !p2.empty());

	if (p1.empty())
		cout << "Player 2 wins!" << endl;
	else
		cout << "Player 1 wins!" << endl;

	return 0;
}