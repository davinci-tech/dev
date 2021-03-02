#include <bits/stdc++.h>

std::ifstream fin("xorfibo.in");
std::ofstream fout("xorfibo.out");
typedef unsigned long long ll;

ll Q;
ll cerinte[10005][4];
ll k, l, r;
ll fPos = 0, fT1, fT2 = 1; // 0 1 1 2 3 5

ll generateFib();

int main()
{

  fin >> Q;
  for (ll i = 0; i < Q; i++)
  for (int j = 1; j < 4; j++)
  fin >> cerinte[i][j];

  for (ll i = 0; i < Q; i++)
  {
  ll deimpartitor = 1 << cerinte[i][1];
  ll impartitor = 0;
  ll resultat = 0;
  ll sumxor = 0;
  ll sumxorIsSet = false;
  l = cerinte[i][2];  // capatul din stanga
  r = cerinte[i][3];  // capatul din dreapta

  while (fPos < l)
  {
  generateFib();
  }
  while (fPos <= r)
  {
  if (sumxorIsSet == false)
  {
  sumxor = generateFib();
  sumxorIsSet = true;
  }
  else
  sumxor = sumxor ^ generateFib();
  }
  impartitor = sumxor;

  resultat = ((impartitor) &(deimpartitor-1)); // resultat = impartitor % deimpartitor; 
  fout << resultat << '\n';
  }

  return 0;
}

// genereaza urmatorul numar fib
ll generateFib()
{
  ll resultat;
  if (fPos == 1)
  resultat = 0;
  else if (fPos == 2)
  resultat = 1;
  else
  {
  resultat = fT1 + fT2;
  fT1 = fT2;
  fT2 = resultat;
  }
  fPos++;

  return resultat;
}

// 0 1 1 2 3 5 11
// 1 2 3 4 5 6 7
//