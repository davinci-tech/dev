#include <bits/stdc++.h>

using namespace std;

struct Num
{
    int val;
    int cnt;
} V[10];
int N, x;

bool test(Num a, Num b) {
	return (a.cnt < b.cnt || (a.cnt == b.cnt && a.val < b.val));
}

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
    
    sort(V, V+10, test);
    
    for (int i = 0; i < 10; i++)
        if (V[i].cnt > 0)
            cout << V[i].val << ' ';

    return 0;
}