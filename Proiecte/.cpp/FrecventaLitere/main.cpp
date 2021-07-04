#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>

struct Letter {
	char name;
	int IOA = 0; // IOA = Index Of Apparence (the frequency of a letter)

	bool operator > (const Letter& l) const
    {
    	if (this->IOA == l.IOA)
        	return (this->name < l.name); 
        return (this->IOA > l.IOA);
    }
};
std::vector < Letter > alphabet;

void
setup() {
	Letter l;
	int cnt = 64;
	while (cnt++ < 90) {
		l.name = (char)(cnt);
		alphabet.push_back(l);
	}
	l.name = ' ';
	alphabet.push_back(l);
}


// Reads from std::cin until it detects EOF (Ctrl + d -> Linux .V. Ctrl + d & Ctrl + z . Windows)
std::string
read() {
	std::string text = "";
	std::string line; 
	while (std::getline(std::cin, line))
	{
		text += line;
	}
	return text;
}

int
main(int argc, char const *argv[])
{
	std::ios_base::sync_with_stdio(false);
	setup();

	// Reading and making the string case-insensitive
	std::string String = read();
	for (int i = 0; i < String.length(); i++)
	{
		alphabet[ toupper(String[i]) - 65 ].IOA++;
	}

	// Count the number of existing letters (it is ussefull for calculating the frequency)
	size_t letters = 0;
	for (int i = 0; i < alphabet.size(); i++)
		if (alphabet[i].IOA != 0)
			letters++;
	
	// Display the letter folowed by the frequency of it
	for (int i = 0; i < alphabet.size(); i++)
		if ( alphabet[i].name != ' ')
			std::cout << alphabet[i].name << ':' << (double)(alphabet[i].IOA) / letters * 100 << "%\n" ; // PossibleCases / TotalCases = IOA / alphabet.lenght()

	// Print the order of letters (after sorting the vecotor, of course :))
	std::cout << "Order: \n  "; 
	std::sort(alphabet.begin(), alphabet.end(), std::greater<Letter>());
	for ( Letter element : alphabet )
	{
		if (element.name != ' ')
			std::cout << element.name << ", ";
	}
	std::cout << "\b\b \n";

	// Print other infos
	std::cout << "Regular order (in english) is: \n  E, T, A, O, I, N, S, R, H, D, L, U, C, M, F, Y, W, G, P, B, V, K, X, Q, J, Z";

	return 0;
}

/* 
English Letter Frequency (based on a sample of 40,000 words)
		Letter 	Count 	  	Letter 	Frequency
		E 		21912 	  	E	 	12.02
		T 		16587 	  	T	 	9.10
		A 		14810 	  	A	 	8.12
		O 		14003 	  	O	 	7.68
		I 		13318 	  	I	 	7.31
		N 		12666 	  	N	 	6.95
		S 		11450 	  	S	 	6.28
		R 		10977 	  	R	 	6.02
		H 		10795 	  	H	 	5.92
		D 		7874 	  	D 		4.32
		L 		7253 	  	L 		3.98
		U 		5246 	  	U 		2.88
		C 		4943 	  	C 		2.71
		M 		4761 	  	M 		2.61
		F 		4200 	  	F 		2.30
		Y 		3853 	  	Y 		2.11
		W 		3819 	  	W 		2.09
		G 		3693 	  	G 		2.03
		P 		3316 	  	P 		1.82
		B 		2715 	  	B 		1.49
		V 		2019 	  	V 		1.11
		K 		1257 	  	K 		0.69
		X 		315 	  	X 		0.17
		Q 		205 	  	Q 		0.11
		J 		188 	  	J 		0.10
		Z 		128 	  	Z 		0.07

Order:
	E, T, A, O, I, N, S, R, H, D, L, U, C, M, F, Y, W, G, P, B, V, K, X, Q, J, Z
*/