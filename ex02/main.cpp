#include "Array.hpp"
#include <exception>
#include <iostream>

void i_wanna_go_home(void) {
	system("leaks array");
}

int main(void) {
	// atexit(i_wanna_go_home);
	Array<int> a(10);
	int *b = new int[10];
	Array<int> c(3);

	for (size_t i = 0; i < 10; i++) {
		a[i] = i;
		b[i] = i;
	}

	c = a;

	std::cout << "Array<int> a: ";
	try {
		for (size_t i = 0; i < a.size(); i++)
			std::cout << a[i] << " ";
		std::cout << std::endl;
		} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "int b[]: ";
	for (int i = 0; i < 10; i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Array<int> c: ";
	try {
		for (size_t i = 0; i < c.size(); i++)
			std::cout << c[i] << " ";
		std::cout << std::endl;
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	delete [] b;
	return 0;
}
