#include <bits/stdc++.h>

using namespace std;

int N, frecv[105], num, cnt;

int main()
{

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        frecv[num]++;
    }

    for (int i = 0; i < 101; i++)
    {
        cnt += frecv[i]/2;
    }

    cout << cnt;

    return 0;
}