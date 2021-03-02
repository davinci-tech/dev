#include "Lexer.h"

#include <iostream>
#include <vector>

static std::string OP_TYPE = "";

std::vector<Token> Lexer::scan(std::string data)
{	
	std::vector<Token> tokens;

    for(size_t i = 0; i < data.size(); i++)
	{
		if(isdigit(data[i])) { // determina numerele (momentat, doar numerele naturale) si ii aduga in vector
			int value;
			while(isdigit(data[i]))
			{
				value *= 10;
				value += charToInt(data[i]);
				i++;
			}
			
			tokens.push_back(Token("[INT]", value));
			std::cout << "[INT] " << value << '\n';
			
			value = 0;
			i--;
		} else if (isOperator(data[i])) { // determina operatorii si ii aduga in vector
			tokens.push_back(Token(OP_TYPE, 0));

			std::cout << '[' << OP_TYPE << ']' << ' ' << data[i] << '\n';
		} else if (data[i] == ' ' || data[i] == '\t') {
			continue;
		} else {
			std::cerr << "[Invalid character { " << data[i] << " }]...\nSTOPING..."; // daca un operator este invalid, se arunca o eroare si programul se opreste
			stop(1);
		}
	}
	for(size_t i = 0; i < tokens.size(); i++)
	{
		std::cout << std::string(tokens[i]) << '\n';
	}
	return tokens;
}

bool Tools::isOperator(char _operator)
{
    std::vector<char> operators = {'+', '-', '*', '/', '(', ')'};
    std::vector<std::string> names = {"OP_PLUS", "OP_MINUS", "OP_MUL", "OP_DIV", "OP_LBRACKET", "OP_RBRACKET"};

    for(size_t i = 0; i < operators.size(); i++)
    {
        if(_operator == operators[i])
        {
            OP_TYPE = names[i];
            return true;
        }
    }
    return false;
}