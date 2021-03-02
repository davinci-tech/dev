// https://www.pbinfo.ro/probleme/119/2maxim
// main.cpp
//
#include <iostream>

long long n = 0, max1, max2, var;

int main() {
    
    std::cin >> n; n--;

    std::cin >> max1 >> max2;
    for(int i=1;i<n;++i) {
        std::cin >> var;
        if (var >= max1)
        {
            max2 = max1;
            max1 = var;
        }
    //     if (max2 > max1)
    // {
    //     max1 = max2;
    // }
    }
    // if (max2 > max1)
    // {
    //     max1 = max2;
    // }

    std::cout << max1 << " " << max2;
    
	return 0;
}