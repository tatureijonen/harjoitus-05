/*
TATU REIJONEN - IIO14S2

Harjoitus 5 (palautus vko 40)

Kirjoita ohjelma, joka pyyt‰‰ k‰ytt‰j‰lt‰ kaksi kokonaislukua.

Ohjelma tulostaa tekstin BINGO, mik‰li luvut ovat samoja.

Muussa tapauksessa ohjelma tulostaa tekstin BONGO.

*/

#include <iostream>
using namespace std;
void main()
{
	int luku1, luku2;

	cout << "syˆt‰ luku1: ";
	cin >> luku1;

	cout << "syˆt‰ luku2: ";
	cin >> luku2;

	if (luku1 != luku2)
		cout << "BONGO";
	if (luku1 == luku2)
		cout << "BINGO";
}