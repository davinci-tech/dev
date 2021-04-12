#include <bits/stdc++.h>
#define ZID '#'
#define CARARE '.'
#define input fin
#define output std::cout

std::ifstream fin("jumpy.in");
std::ofstream fout("jumpy.out");
typedef unsigned long long ll;

size_t N, M;
char board[505][505];

void Read()
{
    input >> N >> M;
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
        {
            input >> board[i][j];
        }
    }
}

void Solve()
{
}

void Show()
{
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
        {
            output << board[i][j] << ' ';
        }
        output << '\n';
    }
}

int main()
{

    Read();
    Solve();
    Show();

    return 0;
}