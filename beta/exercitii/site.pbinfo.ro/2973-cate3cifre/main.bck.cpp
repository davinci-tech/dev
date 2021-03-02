// https://www.pbinfo.ro/probleme/2973/cate3cifre
// main.cpp
//
#include <bits/stdc++.h>

std::ifstream fin("cate3cifre.in");
std::ofstream fout("cate3cifre.out");

typedef long long ll;
#define input fin
#define output fout

ll N, cerinta;
ll b[3], c[3];

bool Ok(int num)
{
  ll index = 0;

  for (ll baza = 2; baza < num; baza++)
  {
  if (baza == 10)
  continue;
  ll cifra = num % baza;
  if (cifra == 0 || cifra % num == 0)
  continue;

  if ((baza * baza + baza + 1) == (num / cifra))
  {
  b[index] = baza;
  c[index] = cifra;

  if (index < 2)
  index++;

  if (index == 2)
  return true;
  }
  }

  return false;
}

int main()
{
  input >> cerinta >> N;

  for (ll i = N; i > 0; i--) // ll i = N; i > -1; i--
  {
  if (Ok(i) == true)
  {
  if (cerinta == 1)
  output << i;
  else
  output << b[0] << ' ' << c[0] << '\n'
     << b[1] << ' ' << c[1];
  return 0;
  }
  }

  return 0;
}