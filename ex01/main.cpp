#include "iter.hpp"

#include <iostream>

template <typename T>
void print(T& x) {
	std::cout << x;
}

template <typename T>
void print(const T& x) {
	std::cout << x;
}

int main(void) {
	int *arr = new int[10];
	const char *arr2 = "Hello World!";

	for (int i = 0; i < 10; i++) {
		arr[i] = i;
	}

	iter(arr, 10, print);
	std::cout << std::endl;
	iter(arr2, 12, print);
	std::cout << std::endl;

	return 0;
}
