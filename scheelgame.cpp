#include <iostream>

int main() {
	int a;
	std::cin >> a;

	int hm;
	hm = a;
	while (not (hm == 1)) {
		if (hm % 2) {
		// odd
		hm = (hm * 3) + 1;
		std::cout << hm << std::endl;
		} else {
		// even
		hm = hm / 2;
		std::cout << hm << std::endl;
		}
	};
	
	return 0;
}
