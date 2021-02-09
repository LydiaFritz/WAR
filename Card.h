#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>

using namespace std;

class Card {
private:
	int value;
	string suit;
public:
	Card(int, string);
	int getValue()const;
	string getSuit()const;

	//overload the > operator
	bool operator>(const Card& rhs);
	bool operator==(const Card& rhs);
	friend ostream& operator<<(ostream& out, const Card& c);
};


#endif // !CARD_H

