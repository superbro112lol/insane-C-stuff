#include <iostream>

int main() {
	std::string a;
	getline(std::cin, a);

	for (int i = 0; i<100; ++i) {
		std::cout << a << std::endl;
	}
	return 0;
}
