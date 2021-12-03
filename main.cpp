#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include "card.h"

std::vector<Card*> Init_Deck() {
	std::vector<Card*> deck(52);
	std::string SuitName;
	for (unsigned i = 0; i < 52; ++i) {
		if (i / 13 == 0) 
			SuitName = "Clubs";
		else if (i / 13 == 1) {
			SuitName = "Diamonds";
		}
		else if (i / 13 == 2) {
			SuitName = "Hearts";
		}
		else {
			SuitName = "Spades";
		}

		deck[i] = new Card(i % 13, SuitName);

	}
	return deck;
}

void Shuffle_Deck(std::vector<Card*>& deck) {
	std::srand(time(0));
	std::random_shuffle(deck.begin(), deck.end());
}


int main () {
	std::vector<Card*> deck = Init_Deck();
	
	for (int i = 0; i < 52; ++i) {
		deck[i]->ShowCard();
	}

	Shuffle_Deck(deck);

	std::cout << "------------------------SHUFFLE--------------------" << std::endl;

	for (int i = 0; i < 52; ++i) {
		deck[i]->ShowCard();
	}
	return 0;

}
