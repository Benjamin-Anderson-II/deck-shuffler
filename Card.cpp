#include <iostream>
#include "Card.h"

using namespace std;

//a=rank
//b=suit
void Card::setContent(int a, int b){
	rank = a;
	suit = b;
}

void Card::display(){
	switch(rank){
		case 1:
		cout << "Ace";
		break;
		case 11:
		cout << "Jack"; 
		break;
		case 12:
		cout << "Queen";
		break;
		case 13:
		cout << "King";
		break;
		default:
		cout << rank;
		break;
	}
	cout << " of ";
	switch(suit){
		case 0:
		cout << "diamonds";
		break;
		case 1:
		cout << "hearts";
		break;
		case 2:
		cout << "spades";
		break;
		case 3:
		cout << "clubs";
		break;
		default: 
		break;
	}
	cout << endl;
}