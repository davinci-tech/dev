#include <bits/stdc++.h>

std::ifstream fin("test.in");

int main()
{

  int prevChar = 0;
  prevChar = fin.get();

  prevChar = fin.get();
  prevChar = fin.get();

  fin >> prevChar;
  while (!fin.eof())
  {
    if (fin.good())
    {
      prevChar = fin.get();
      std::cout << prevChar;
    }
    fin.seekg(-2, fin.cur); // -2 because we want to read the previous char, -1 will move the position to the current char again
  }

  return 0;
}