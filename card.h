#ifndef CARD_H
#define CARD_H

#include <iostream>

class Card {
	public:

	unsigned Name;
	std::string Suit;

	Card();
	Card(unsigned cName, std::string cSuit);
	void ShowCard();
	
};

Card::Card() {
	Name = 0;
	Suit = "0";
}

Card::Card(unsigned cName, std::string cSuit) {
	Name = cName;
	Suit = cSuit;
}

void Card::ShowCard() {
	std::cout << Name << " of " << Suit << std::endl;
}

#endif
