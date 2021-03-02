// https://www.pbinfo.ro/probleme/1804/ursulet
// main.cpp
//
#include <bits/stdc++.h>
#define __NAME_OF_THE_FILE__ "ursulet"

std::ifstream fin(__NAME_OF_THE_FILE__ ".in");
std::ofstream fout(__NAME_OF_THE_FILE__ ".out");
size_t n;
int v[100000], st, dr, S = -1, Smax = INT32_MIN, start;

void Read()
{
  fin >> n;
  n++;
  for (size_t i = 1; i < n; i++)
  fin >> v[i];
}

void Solve()
{
  for (size_t i = 0; i < n; i++)
  {
  if (S < 0)
  S = 0, start = i;
  S += v[i];
  if (S > Smax)
  Smax = S, st = start, dr = i;
  }
}

void Show()
{
  fout << Smax << '\n'
   << st << ' ' << dr;
}

int main()
{

  Read();
  Solve();
  Show();

  return 0;
}