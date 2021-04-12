#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

std::ifstream fin("bricks.in");
std::ofstream fout("bricks.out");

#define input fin
#define output fout

struct caramida
{
    bool culoare;
    int inaltime;
};

int solve(int N, bool C[], int H[])
{
    caramida caramizi[N] = {0};
    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        caramizi[i].culoare = C[i];
        caramizi[i].inaltime = H[i];
    }

    return cnt;
};

int main()
{
    std::vector<int> a;
    int N;
    input >> N;
    bool C[N];
    int H[N];
    for (int i = 0; i < N; i++)
    {
        input >> C[i];
    }
    for (int i = 0; i < N; i++)
    {
        input >> H[i];
    }

    output << solve(N, C, H);

    return 0;
}