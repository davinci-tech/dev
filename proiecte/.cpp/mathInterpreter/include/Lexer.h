#pragma once
#include <string>
#include <vector>

#include "..\lib\convertTo.cpp"
#include "Tools.h"

class Token{
private:
  std::string TokenType;
  double TokenValue;
  bool isOperator(char _operator);
private:
  static std::string OP_TYPE; 
public:
  Token(std::string type, double value)
  {
  TokenType = type;
  TokenValue = value;
  }
  operator std::string () const {
  return std::string(TokenType+ "  ~  "+ convertTo<std::string, double>(TokenValue)+ '\b');
  }
};

class Lexer: public Tools{
public:
  std::vector<Token> scan(std::string);
};