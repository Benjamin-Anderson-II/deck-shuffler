#include "Deck.h"

using namespace std;

int main(int argc, char const *argv[])
{
	Deck dk;
	dk.create();
	for(int i = 0; i < 52; i++){
		dk.getCardAtIndex(i).display();
	}
	cout << "------------------\n";
	dk.shuffle();
	for(int i = 0; i < 52; i++){
		dk.getCardAtIndex(i).display();
	}
	return 0;
}