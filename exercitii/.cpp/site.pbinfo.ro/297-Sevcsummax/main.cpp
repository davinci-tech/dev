// https://www.pbinfo.ro/probleme/297
// main.cpp
//
#include <iostream>
#include <fstream>
#include <climits>
#define __NAME_OF_THE_FILE__ "secvsummax"

std::ifstream fin(__NAME_OF_THE_FILE__".in");
std::ofstream fout(__NAME_OF_THE_FILE__".out");
long long n, v[100000];
int st , dr, Smax = -2000000000 , S = -1, start;

void Read() {
  fin >> n;
  n++;
  for (int i = 1; i < n; i++)
  {
  fin >> v[i];
  }
}

void Solve() {
  for(int i = 1 ; i <= n; ++ i)
  {
  if(S < 0)
  S = 0, start = i;
  S += v[i];
  if(S > Smax)
  Smax = S, st = start, dr = i;
  }
}

void Show() {
  if (dr > n)
  fout << st << ' ' << dr-1;
  else
  fout << st << ' ' << dr;
}

int main() {
  
  Read();
  Solve();
  Show();

	return 0;
}