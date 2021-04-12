#include <bits/stdc++.h>
using namespace std;

ifstream fin("mirrored.in");
ofstream fout("mirrored.out");
typedef unsigned long long ll;

ll N; // numar de persoane
vector<ll> ids; // vector cu id-urile
ll cnt; // contor
ll cnt1; // contor pentru numerele debusolate cu o cifra (caz special)

ll mirror(ll num) {
    ll resultat = 0;
    while(num) {
        ll cifra = num % 10; // 123
        resultat = resultat * 10 + cifra;
        num /= 10;
    }

    return resultat;
}

int main () {

    fin >> N;
    for (ll i = 0; i < N; i++) {
        ll tmp;
        fin >> tmp;
        ids.push_back(tmp);
    }
    for (ll i = 0; i < N; i++) {
        ids.push_back(mirror(ids[i]));
    }
    sort(ids.begin(), ids.end()); 
    for(ll i = 0; i < ids.size(); i++)
        cout << ids[i] << ' ';
    for (ll i = 1; i < ids.size(); i++) {
        if (ids[i] == ids[i-1])
            cnt++;
        if (ids[i] < 10)
            cnt1++;
    }
    fout << cnt - cnt1 / 2;

    // daca nu merge, folosesc qsort si binary search, erase pentru a reduce din elemente SI ****ids.size()**** NU N (variabile)

    return 0;
}