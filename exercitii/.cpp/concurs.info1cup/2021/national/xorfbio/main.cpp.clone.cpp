#include <bits/stdc++.h>

std::ifstream fin("xorfibo.in");
std::ofstream fout("xorfibo.out");
typedef unsigned long long ll;

ll Q;
ll cerinte[10005][3];
ll k, l, r;
ll fPos = 2, fT1, fT2 = 1;

ll generateFib();

int main () {

  fin >> Q;
  for (ll i = 0; i < Q; i++)
  for (int  j = 1; j < 4; j++)
  fin >> cerinte[i][j];

  for (ll i = 0; i < Q; i++)
  {
  ll deimpartitor = 1 << cerinte[i][1];
  ll impartitor = 0;
  ll resultat = 0;
  ll sumxor = 0;
  ll sumxorIsSet = false;
  l = cerinte[i][2];
  r = cerinte[i][3];

  while (fPos < l)
  generateFib();
  while (fPos <= r)
  if (sumxor == false)
  sumxor = generateFib();
  else
  sumxor = sumxor ^ generateFib();
  impartitor = sumxor;
  resultat = impartitor % deimpartitor;
  std::cout << resultat << '\n';
  }

  return 0;
}

ll generateFib() {  // genereaza urmatorul numar fib
  // fT1, fT2
  ll resulatat = fT1 + fT2;
  fT1 = fT2;
  fT2 = resulatat; // 0 1 1 2 3
  fPos++;

  return resulatat;
}