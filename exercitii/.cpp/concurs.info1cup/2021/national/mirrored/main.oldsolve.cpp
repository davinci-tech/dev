#include <bits/stdc++.h>

std::ifstream fin("mirrored.in");
std::ofstream fout("mirrored.out");
typedef unsigned long long ll;

ll N; // numar de persoane
std::vector<ll> ids; // vector cu id-urile
ll cnt; // contor

ll mirror(ll num) {
  ll resultat = 0;
  while(num) {
  ll cifra = num % 10; // 123
  resultat = resultat * 10 + cifra;
  num /= 10;
  }

  return resultat;
}

ll cauta(ll n) {
  for (ll i = 0; i < N; i++)
  if (n == ids[i])
  return true;
  return false;
}

int main () {

  fin >> N;
  for (ll i = 0; i < N; i++) {
  ll tmp;
  fin >> tmp;
  ids.push_back(tmp);
  }

  for (ll i = 0; i < N; i++) {
  if ( cauta(mirror(ids[i])) == false)
  cnt++;
  } 

  fout << cnt;

  // daca nu merge, folosesc qsort si binary search, erase pentru a reduce din elemente SI ****ids.size()**** NU N (variabile)

  return 0;
}