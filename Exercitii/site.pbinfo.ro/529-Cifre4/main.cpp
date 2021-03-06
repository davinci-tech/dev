#include <bits/stdc++.h>

using namespace std;

struct Num
{
    int val;
    int cnt;
} V[10];
int N, x;

int main()
{

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> x;
        if (x == 0)
            V[0].cnt++;
        else
        {
            while (x)
            {
                V[x % 10].cnt++;
                x /= 10;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        V[i].val = i;
    }
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (V[i].cnt > V[j].cnt || (V[i].cnt == V[j].cnt && V[i].val > V[j].val))
                swap(V[i], V[j]);
        }
        
    }
    
    for (int i = 0; i < 10; i++)
        if (V[i].cnt > 0)
            cout << V[i].val << ' ';

    return 0;
}