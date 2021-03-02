// https://www.pbinfo.ro/probleme/346
// main.cpp
// 

#include <iostream>

long long n = 0, max , var, ap;

int main() {
    
    std::cin >> n;

    std::cin >> var >> max;
    ap = 1;
    n--;
    for(; n > 1; n--) {
        std::cin >> var;
        if (var > max)
        {
            max = var;
            ap = 1;
        } else if (var == max) {
            ap++;
        }
    }

    std::cout << max << ' ' << ap;
    
	return 0;
}