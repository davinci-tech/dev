#include <bits/stdc++.h>

std::ifstream fin("test.in");

int main()
{

  int prevChar = 0;
  prevChar = fin.get();

  while (!fin.eof())
  {
    prevChar = fin.get();
    std::cout << (char)prevChar << ' ';
    fin.seekg(-2, fin.cur); // -2 because we want to read the previous char, -1 will move the position to the current char again
    prevChar = fin.get();
  }

  return 0;
}