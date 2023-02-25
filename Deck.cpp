#include "Deck.h"

using namespace std;

void Deck::create(){
	Card c;
	int count = 0;
	for (int i = 0; i < 4; i++){ // suit
		for (int j = 1; j <= 13; j++){ // rank
			c.setContent(j, i);
			cards[count] = c;
			count++;
		}
	}
}

void Deck::shuffle(){
	int toSwap;
	Card temp;
	srand(time(NULL));
	for(int i = 0; i < 52; i++){
		toSwap = rand() % 52;
		temp = cards[i];
		cards[i] = cards[toSwap];
		cards[toSwap] = temp;
	}
}

Card Deck::getTopCard(){ // 0th index
	return cards[0];
}

Card Deck::getCardAtIndex(int idx){
	return cards[idx];
}