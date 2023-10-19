#include "Array.hpp"
#include <stdexcept>
#include <iostream>

int main(void) {
	{
		Array<int> a(10);
		int *b = new int[10];

		for (size_t i = 0; i < 10; i++) {
			a[i] = i;
			b[i] = i;
		}

		std::cout << "Array<int> a: ";
		try {
			// for (size_t i = 0; i < a.size(); i++) {
			for (size_t i = 0; i < a.size() + 1; i++) {
				std::cout << a[i] << " ";
			}
		} catch (const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;

		std::cout << "int b[]: ";
		for (int i = 0; i < 10; i++) {
			std::cout << b[i] << " ";
		}
		std::cout << std::endl;

		delete [] b;
	}
	return 0;
}
