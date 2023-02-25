/*
	This file describes the Card class.
*/
#ifndef CARD_H
#define CARD_H

#include <iostream>

class Card {
	private:
		int rank;// (0-12) -> (ace->king)
		int suit;// (0-3)  -> (d,h,s,c)
	public:
		void setContent(int a, int b);
		void display();
};
#endif
