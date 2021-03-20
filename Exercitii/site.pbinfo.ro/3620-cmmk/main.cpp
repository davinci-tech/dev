#include <bits/stdc++.h>

size_t n, k;

int main() {
	std::cin >> n >> k;
	
	while (n) {
		size_t cif = n % 10;
		
		if (cif > k) {
			std::cout << "NU";
			return 0;
		}
		
		n /= 10;
	}

	std::cout << "DA";
	return 0;
}