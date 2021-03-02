// https://info1cup.com/archive/2019/national/task1/
// main.cpp
// 
#include <bits/stdc++.h>

int main()
{
    std::string str;
    std::cin >> str;

    std::string s1, s2;
    for (size_t i = 0; i < str.length() / 2; i++)
        s1 += str[i];
    for (size_t i = str.length() / 2; i < str.length(); i++)
        s2 += str[i];

    std::cout << s1 << ' ' << s2;

    return 0;
}