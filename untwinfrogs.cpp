#include <iostream>
#include <cmath>

long double root(long double value, long double root) {
	return std::pow(value, 1.0/root);
}

long double calc(std::string op, long double a, long double b) {
    
	long double result;

	// some guy helped me to make this code clean
	if (op == "+") {
        	result = a+b;
	} else if (op == "-") {
        	result = a-b;
	} else if (op == "*") {
        	result = a*b;
	} else if (op == "/") {
        	result = a/b;
    	} else if (op == "root") {
        	result = root(a,b);
    	} else {
		std::cout << "nuh uh. wrong operator";
	}

	return result;
}

int main(int argc, char *argv[]) {


	std::string op;
	getline(std::cin, op);

	long double a;
	std::cin >> a;

	long double b;
	std::cin >> b;
 
	std::cout << calc(op, a, b) << std::endl;

	return 0;
}
