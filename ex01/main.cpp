#include "iter.hpp"

#include <iostream>

template <typename T>
void print(T &x) {
	std::cout << x << std::endl;
}

template <typename T>
void print(T const &x) {
	std::cout << x << std::endl;
}

int main(void) {
	int *arr = new int[10];
	const char *arr2 = "Hello World!";

	for (int i = 0; i < 10; i++) {
		arr[i] = i;
	}

	iter(arr, 10, print);
	iter(arr2, 12, print);

	return 0;
}
