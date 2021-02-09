#include "Card.h"

Card::Card(int v, string s):value(v), suit(s) {}

int Card::getValue()const {
	return value;
}
string Card::getSuit()const {
	return suit;
}

bool Card::operator>(const Card& rhs)
{
	return value > rhs.value;
	/*if (value > rhs.value)return true;
	else return false;*/
}

bool Card::operator==(const Card& rhs)
{
	return value == rhs.value;
}

ostream& operator<<(ostream& out, const Card& c)
{
	if (c.value <= 10)
		out << c.value << "" << c.suit[0];
	else if (c.value == 11)
		out << "J" << c.suit[0];
	else if (c.value == 12)
		out << "Q" << c.suit[0];
	else if (c.value == 13)
		out << "K" << c.suit[0];
	else
		out << "A" << c.suit[0];
	return out;
}
