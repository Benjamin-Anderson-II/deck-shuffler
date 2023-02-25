/*
	This file describes the Card class.
*/
#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Card.h"

class Deck {
	private:
		Card cards[52];
		int numCards;  // Number of cards remaining in the deck.
	public:
		void create();
		Card getTopCard();
		Card getCardAtIndex(int);
		void shuffle();
};
#endif
