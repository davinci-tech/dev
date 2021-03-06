#include <bits/stdc++.h>

using namespace std;

std::ifstream fin("nrlipsa.in");
std::ofstream fout("nrlipsa.out");

int nums[1001];
int cnt = 1;
int a, b;

int main()
{

    while (!fin.eof())
    {
        int tmp;
        fin >> tmp;

        if (tmp > 99 && tmp < 1000)
            nums[tmp]++;
    }

    for (int i = 999; i > 99 && cnt < 3; i--)
    {
        if (nums[i] == 0 && cnt < 3)
        {
            if (cnt == 1)
                a = i;
            else 
                b = i;
            cnt++;
        }
    }

    if (cnt == 3)
        fout << a << ' ' << b;
    else
        fout << "NU";

    return 0;
}