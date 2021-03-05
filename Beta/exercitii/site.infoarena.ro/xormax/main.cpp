// https://www.infoarena.ro/problema/xormax
// main.cpp
//
#include <bits/stdc++.h>

#define __NAME_OF_THE_FILE__ "xormax"
std::ifstream fin(__NAME_OF_THE_FILE__ ".in");
std::ofstream fout(__NAME_OF_THE_FILE__ ".out");

int N, nums[100005];
int Smax = INT_MIN, S = -1;
size_t st, dr, start;

void Read()
{
    fin >> N;
    for (int i = 1; i <= N; i++)
        fin >> nums[i];
}

void Solve()
{
    for (int i = 1; i <= N; i++)
    {
        if (S < 0) {
            S = 0; start = i;
        }
        S ^= nums[i];
        if ( S > Smax)
        {
            Smax = S;
            st = start;
            dr = i;
        }
    }
}

void Show()
{
    fout << Smax << ' ' << st << ' ' << dr;
}

int main()
{
    Read();
    Solve();
    Show();

    return 0;
}