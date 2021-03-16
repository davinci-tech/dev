#include <bits/stdc++.h>

using namespace std;

struct Num
{
    size_t val = 0;
    size_t sumCif = 0;

    void suma()
    {
        size_t valCopy = val;
        while (val > 0)
        {
            sumCif += val % 10;
            val /= 10;
        }
        val = valCopy;
    }

    friend ostream &operator<<(ostream &os, Num a);
    // friend bool operator==(Num a, Num b);
};

ostream &operator<<(ostream &os, Num a)
{
    return os << a.val << ':' << a.sumCif << '\n';
}
// bool operator==(Num a, Num b)
// {
//     return a.val == b.val && a.sumCif == b.sumCif;

// }
size_t N;
auto comp = [](Num a, Num b) { return a.sumCif <= b.sumCif; };
std::priority_queue<Num, std::vector<Num>, decltype(comp)> nums(comp);

int main()
{
    size_t cnt = 0;
    cin >> N;
    for (size_t i = 0; i < N; i++)
    {
        Num numar;
        cin >> numar.val;
        numar.suma();
        nums.push(numar);
    }

    Num pre;
    pre = nums.top();
    nums.pop();
    std::cout << pre;

    size_t cnt1 = 0;
    while (!nums.empty())
    {
        if (pre.val == nums.top().val)
        {
            if (cnt1 == 0)
                cnt1++;
            else
            {
                cnt += cnt1 * (cnt1 + 1) / 2;
                cnt1 = 0;
            }
        }
        std::cout << nums.top();
        nums.pop();
    }
    cout << cnt;

    return 0;
}