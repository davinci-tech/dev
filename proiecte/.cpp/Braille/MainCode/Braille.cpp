// Braille.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "const.h"

// Some Global Vars
std::ifstream fin(INPUT_FILE);
std::ofstream fout(OUTPUT_FILE);

std::vector<std::vector<char>> letter;
std::vector<char> print1; // this will contain the first layer of character, for example, if A is   ..., then, print 1 will contain ...
std::vector<char> print2; // this will contain the second layer of character, for example, if A is  .. , then, print 1 will contain ..
std::vector<char> print3; // this will contain the third layer of character, for example, if A is   . ., then, print 1 will contain . .
std::string stringPrint;  // this will contain the Braille letters that will be printed until a newline is encountered

// Some Function Defs
void print(std::vector<char> _print1, std::vector<char> _print2, std::vector<char> _print3);

int main()
{
  if (!fin.is_open())
  { // Verify if there is an input file (there is no need to verify if there is an output file because, it will be created automatically)
    std::cerr << "File '" << INPUT_FILE << "' couldn't be opend or it doesn't exist";
    return 1;
  }

  char cc = 0;        // current character (cc)
  while (fin.get(cc)) // get the current character
  {
    switch (cc)
    {
    case 'A':
      letter = l_A; // set the letter variable
      break;
    case 'B':
      letter = l_B;
      break;
    case 'C':
      letter = l_C;
      break;
    /*case 'D':
  letter = l_D;
  break;
  case 'E':
  letter = l_E;
  break;
  case 'F':
  letter = l_F;
  break;
  case 'G':
  letter = l_G;
  break;
  case 'H':
  letter = l_H;
  break;
  case 'I':
  letter = l_I;
  break;
  case 'J':
  letter = l_J;
  break;
  case 'K':
  letter = l_K;
  break;
  case 'L':
  letter = l_L;
  break;
  case 'M':
  letter = l_M;
  break;
  case 'N':
  letter = l_N;
  break;
  case 'O':
  letter = l_O;
  break;
  case 'P':
  letter = l_P;
  break;
  case 'Q':
  letter = l_Q;
  break;
  case 'R':
  letter = l_R;
  break;
  case 'S':
  letter = l_S;
  break;
  case 'T':
  letter = l_T;
  break;
  case 'U':
  letter = l_U;
  break;
  case 'V':
  letter = l_V;
  break;
  case 'W':
  letter = l_W;
  break;
  case 'X':
  letter = l_X;
  break;
  case 'Y':
  letter = l_Y;
  break;
  case 'Z':
  letter = l_Z;
  break;
  //////////////////////////////////////////////////
  case 'a':
  letter = l_a; // set the letter variable
  break;
  case 'b':
  letter = l_b;
  break;
  case 'c':
  letter = l_c;
  break;
  case 'd':
  letter = l_d;
  break;
  case 'e':
  letter = l_e;
  break;
  case 'f':
  letter = l_f;
  break;
  case 'g':
  letter = l_g;
  break;
  case 'h':
  letter = l_h;
  break;
  case 'i':
  letter = l_i;
  break;
  case 'j':
  letter = l_j;
  break;
  case 'k':
  letter = l_k;
  break;
  case 'l':
  letter = l_l;
  break;
  case 'm':
  letter = l_m;
  break;
  case 'n':
  letter = l_n;
  break;
  case 'o':
  letter = l_o;
  break;
  case 'p':
  letter = l_p;
  break;
  case 'q':
  letter = l_q;
  break;
  case 'r':
  letter = l_r;
  break;
  case 's':
  letter = l_s;
  break;
  case 't':
  letter = l_tt;
  break;
  case 'u':
  letter = l_u;
  break;
  case 'v':
  letter = l_v;
  break;
  case 'w':
  letter = l_w;
  break;
  case 'x':
  letter = l_x;
  break;
  case 'y':
  letter = l_y;
  break;
  case 'z':
  letter = l_z;
  break;*/
    case ' ':
      letter = l_space;
      break;
    case '\n':
      print(print1, print2, print3); // if cc is a newline, we need to clear print1, print2 and print3 and also to print their content
      print1.clear();
      print2.clear();
      print3.clear();
      break;
    default:
      break;
    }

    if (cc != '\n')
    {
      for (size_t i = 0; i < 3; i++) // set the letters that will be printed
      {
        print1.push_back(letter[0][i]);
        print2.push_back(letter[1][i]);
        print3.push_back(letter[2][i]);
      }
// to disable the spaces between words, uncomment this line:
// #undef ENABLE_SPACES_BETWEEN_LETTERS
#ifdef ENABLE_SPACES_BETWEEN_LETTERS
      print1.push_back(' ');
      print2.push_back(' ');
      print3.push_back(' ');
#endif
    }
  }

  print(print1, print2, print3);
  /* // If there is a bug, uncomment this
  print1.clear();
  print2.clear();
  print3.clear();
  */
  stringPrint.pop_back(); // eliminate the last character (which is an 100% useless newline) of the string that will be printed
  fout << stringPrint;    // finaly, print (or write to a file) the string
  return 0;               // and, now, because you finished the code, go to your fluffy bed, enjoy your life and ~get a nice sleep~ read Ion de Liviu Rebreanu
}

void print(std::vector<char> _print1, std::vector<char> _print2, std::vector<char> _print3)
{
  for (size_t i = 0; i < _print1.size(); i++)
  {
    stringPrint += _print1[i];
  }
  stringPrint += '\n';
  for (size_t i = 0; i < _print2.size(); i++)
  {
    stringPrint += _print2[i];
  }
  stringPrint += '\n';
  for (size_t i = 0; i < _print3.size(); i++)
  {
    stringPrint += _print3[i];
  }
  stringPrint += '\n';
}
