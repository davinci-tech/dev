#pragma region Comments
// link: https://www.pbinfo.ro/probleme/787/matsim1

// #008787

/* Ciorna 
- - >
             0 1 2  3

3 1 8 /5/ => 3 7 1 /5/     0
7 8 /5/ 1 => 1 6 /5/ 8 ^   1
2 /2/ 6 7 => 8 /2/ 8 1 |   2
/9/ 8 1 3 => /9/ 2 7 3 |   3
             
trebuie sa parcurgem matricea de la coltul dreapta-jos 
(din punctul meu de vedere) in sus, iar apoi sa repetam:
  3,  3     2,  3       1,  3       0,  3
  3,  2     2,  2       1,  2       0,  2
  3,  1     2,  1       1,  1       0,  1
  3,  0     2,  0       1,  0       0,  0
 *1* *2*

*1 coloana din a doua matrice
*2 randul din a doua matrice
*/
#pragma endregion Comments
#include <bits/stdc++.h>

size_t n;
int V[105][105];


void Read() {
    std::cin >> n;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            std::cin >> V[i][j];
}

void Print()
{
    std::cout << '\n';
    for (int i = n; i >= 1; --i)
    {
        for (int j = n; j >= 1; --j)
            std::cout << V[j][i] << ' ';
        std::cout << '\n';
    }
}

int main(int argc, char **argv)
{
    std::ios::sync_with_stdio(false);
    Read();
    Print();

    return 0;
}

