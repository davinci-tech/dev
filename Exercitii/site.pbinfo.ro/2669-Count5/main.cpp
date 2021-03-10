#include <bits/stdc++.h>

using namespace std;

struct Num
{
    int val;
    int sumCif;

    void sum()
    {
        while (val)
        {
            sumCif += val % 10;
            val /= 10;
        }
    }
} nums[100005];

int N;

bool compare(Num a, Num b)
{
    return (a.sumCif > b.sumCif);
}
bool NumEgal(Num a, Num b)
{
    return (a.val == b.val && a.sumCif == b.sumCif);
}

int main()
{

    int cnt = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> nums[i].val;
        nums[i].sum();
    }

    sort(nums, nums + N, compare);

    for (int i = -1; i < N; i++)
    {
        if (nums[i].val == nums[i - 1].val && NumEgal(nums[i], nums[i - 1]))
            cnt++;
    }
    cout << cnt;

    return 0;
}

int _main()
{

    int num;
    std::priority_queue<int> V;

    do 
    {
        std::cin >> num;
        V.push(num);
    } while (num != -200);

    while (!V.empty())
    {
        std::cout << V.top() << ' ';
        V.pop();
    }

    return 0;
}