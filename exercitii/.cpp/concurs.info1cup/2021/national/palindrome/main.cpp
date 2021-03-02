#include <bits/stdc++.h>

std::ifstream fin("palindrome.in");
std::ofstream fout("palindrome.out");
typedef long long ll;

ll cnt; // contor
ll N; // numar de persoane
std::string num; // palindromul viitor
std::stack <size_t> sposs;
std::queue <size_t> qposs;

bool isPalindrome(ll num);

int main () {

  fin >> N;
  for (int i = 0; i < N; i++)   
  {
  std::string tmp;
  fin >> tmp;
  num += tmp;
  sposs.push(tmp.size());
  qposs.push(tmp.size());
  }

  for (int i = 0; i < num.size()/2; i++)
  {
  size_t posComplementara = num.size() - i + 1;
  if (num[posComplementara] != num[i] && sposs.top() != qposs.front()) {
  cnt++;
  ll tmp = sposs.top();
  sposs.pop();
  tmp--;
  sposs.push(tmp);
  }
  }

  return 0;
}


bool isPalindrome(ll num) {
  ll resultat = 0;
  ll c_num = num;

  while(num) {
  ll cifra = num % 10; // 123
  resultat = resultat * 10 + cifra;
  num /= 10;
  }

  if (c_num == resultat)
  return true;

  return false;
}



















// g++ -DEVAL -std=gnu++11 -O2 -pipe -static -s -o main main.cpp