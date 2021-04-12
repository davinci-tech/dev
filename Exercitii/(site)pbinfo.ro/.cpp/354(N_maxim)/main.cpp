// https://www.pbinfo.ro/probleme/354/n-maxim
// main.cpp
// 

#include <iostream>

long long n = 0, max , var;

int main() {
    
    std::cin >> n;

    std::cin >> var >> max;
    n--;
    for(; n > 1; n--) {
        std::cin >> var;
        if (var >= max)
            max = var;
    }

    std::cout << max;
    
	return 0;
}