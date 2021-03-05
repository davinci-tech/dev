// https://www.pbinfo.ro/probleme/2789/cb3
// main.cpp
//
#include <bits/stdc++.h>

#define __NAME_OF_THE_FILE__ "cb3"
std::ifstream fin(__NAME_OF_THE_FILE__ ".in");
std::ofstream fout(__NAME_OF_THE_FILE__ ".out");

size_t n, q;
int a[10005], s[100005], tmp[100005];

void Read()
{
    fin >> n >> q;
    for (int i = 1; i <= n; ++i)
        assert(fin >> a[i]);
    std::sort(a + 1, a + n + 1); // comenteaza aceasta linie in caz de eroare
    for (int i = 1; i <= q; ++i)
        assert(fin >> s[i]); // se va incerca metoda Gredy daca nu functioneaza
}

int BS(int value, int v[], int size)
{
    int st = 1, dr = size /* -1 */, mij = 0;
    while (st <= dr)
    {
        int mij = (dr + st) / 2;
        if (v[mij] == value)
            return mij;
        else if (v[mij] < value)
            st = mij + 1;
        else if (v[mij] > value)
            dr = mij - 1;
    }
    return mij;
}

void Solve()
{
    for (int i = 1; i <= n; ++i)
        tmp[i] = tmp[i - 1] + a[i];
    for (int i = 1; i <= q; i++)
    {
        fout << tmp[BS(s[i], tmp, n)] + 1;
    }
}

void Show()
{

}

int main()
{
    Read();
    Solve();
    Show();

    return 0;
}