#include "Lexer.h"
#include <iostream>

const std::string read() // citeste date de la utilizator
{
	std::string data;
	std::getline(std::cin, data);
	if(data == "exit")
		std::exit(0); // daca comanda de la utilizator este 'exit' => se iese din program
	return data;
}

int main()
{
	Lexer lexer; // se creaza un obiect de tip Lexer
	std::cout << "Hey World!\n";
	while(true)
	{
		std::string command;
		std::cout << "Calc > ";
		lexer.scan(read());	
	}
	
	return 0;
}