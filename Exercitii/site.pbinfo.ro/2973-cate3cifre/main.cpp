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
ll b[4], c[4];

int main()
{
    input >> cerinta >> N;

    for (; N--;) // ll; N > -1; N--
    {
        ll index = 0;
        for (ll baza = 2; baza * baza <= N; baza++)
        {
            ll cifra = N / (baza * baza + baza + 1);
            if ((int)cifra == cifra && cifra < baza)
            {
                b[index] = baza;
                c[index] = cifra;
                index++;
                if (index == 2)
                {
                    if (cerinta == 1)
                        output << N;
                    else
                        output << b[0] << ' ' << c[0] << '\n'
                               << b[1] << ' ' << c[1];
                    return 0;
                }
            }
        }
    }

    return 0;
}