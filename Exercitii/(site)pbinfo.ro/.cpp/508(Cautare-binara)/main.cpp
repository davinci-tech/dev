// https://www.pbinfo.ro/probleme/508/cautare-binara
// main.cpp
//
#include <bits/stdc++.h>
// #define __NAME_OF_THE_FILE__ "ursulet"

// std::ifstream fin(__NAME_OF_THE_FILE__ ".in");
// std::ofstream fout(__NAME_OF_THE_FILE__ ".out");

int n, m, mijloc;
int x[25005], y[25005];

void Read()
{
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        assert(std::cin >> x[i]);
    }

    std::cin >> m;
}

void Solve()
{
    int y;
    for (; m; m--)
    {
        std::cin >> y;
        int st = 0, dr = n - 1;
        bool poz = false;
        while (st <= dr)
        {
            mijloc = (st + dr) / 2;
            if (x[mijloc] == y)
            {
                poz = true;
                break;
            }
            else
            {
                if (x[mijloc] > y)
                    dr = mijloc - 1;
                else
                    st = mijloc + 1;
            }
        }
        std::cout << (int)(poz) << ' ';
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