// https://www.pbinfo.ro/probleme/953/deedee
// main.cpp
//

#include <bits/stdc++.h>
#define ll long long
const int size = 100;

// @var V[][] -> matricea pe care o vom parcurge
ll V[size][size];

int main() {
	std::cout << "~-~-~-~-~- Hy ~-~-~-~-~-\n";
	// @var n -> numar de dale
	// @var k -> numar de dale gri
	// @var r -> numarul randului care contine cele mai multe dale gri
	// @var d -> numarul minim de dale pe care Deedee trebuie sa sara pana la destinatie
	ll n = 0, k = 0, r = 0, d = 0, temp = 0;
	std::cin >> n >> k;
	for (int i = 0; i < k; i++)
	{
		std::cin >> temp;	// TODO: gaseste o forumla matematica pentru a afla randul si coloana corespunzatoare
		// seteaza dala corespunzatore cu -1 si inceraca sa rezolvi a)
	}
	
	// parcurgerea "matricei": aplicam algoritmul de la labirint (bazat pe backtracking, cred; ala pe care ni l-a aratat profa)
	for (int i = 0; i < n; i++) // ne deplasam pe randurile in care se afla dalele
	{
		for (int j = 0; j < i+1; j++) // ne deplasam pe dalele de pe un rand
		{
			
		}
	}
	
	return 0;
} 