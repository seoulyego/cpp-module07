#include "whatever.hpp"
#include <string>
#include <iostream>

void swap_test(void) {
	std::cout << std::endl;
	{
		int int_a = 2;
		int int_b = 3;
		std::cout << "before_swap: " << int_a << ", " << int_b << std::endl;
		swap(int_a, int_b);
		std::cout << "after_swap: " << int_a << ", " << int_b << std::endl;
	}
	std::cout << std::endl;
	{
		char char_a = 'a';
		char char_b = 'b';
		std::cout << "before_swap: " << char_a << ", " << char_b << std::endl;
		swap(char_a, char_b);
		std::cout << "after_swap: " << char_a << ", " << char_b << std::endl;
	}
	std::cout << std::endl;
	{
		std::string string_a = "string_a";
		std::string string_b = "string_b";
		std::cout << "before_swap: " << string_a << ", " << string_b << std::endl;
		swap(string_a, string_b);
		std::cout << "after_swap: " << string_a << ", " << string_b << std::endl;
	}
	std::cout << std::endl;
}

void min_test(void) {
	std::cout << std::endl;
	{
		int int_a = 2;
		int int_b = 3;
		std::cout << "int_a = " << int_a << ", int_b = " << int_b << std::endl;
		std::cout << "min: " << min(int_a, int_b) << std::endl;
	}
	std::cout << std::endl;
	{
		char char_a = 'a';
		char char_b = 'b';
		std::cout << "char_a = " << char_a << ", char_b = " << char_b << std::endl;
		std::cout << "min: " << min(char_a, char_b) << std::endl;
	}
	std::cout << std::endl;
	{
		std::string string_a = "string_a";
		std::string string_b = "string_b";
		std::cout << "string_a = " << string_a << ", string_b = " << string_b << std::endl;
		std::cout << "min: " << min(string_a, string_b) << std::endl;
	}
	std::cout << std::endl;
}

void max_test(void) {
	std::cout << std::endl;
	{
		int int_a = 2;
		int int_b = 3;
		std::cout << "int_a = " << int_a << ", int_b = " << int_b << std::endl;
		std::cout << "max: " << max(int_a, int_b) << std::endl;
	}
	std::cout << std::endl;
	{
		char char_a = 'a';
		char char_b = 'b';
		std::cout << "char_a = " << char_a << ", char_b = " << char_b << std::endl;
		std::cout << "max: " << max(char_a, char_b) << std::endl;
	}
	std::cout << std::endl;
	{
		std::string string_a = "string_a";
		std::string string_b = "string_b";
		std::cout << "string_a = " << string_a << ", string_b = " << string_b << std::endl;
		std::cout << "max: " << max(string_a, string_b) << std::endl;
	}
	std::cout << std::endl;
}

int main(void) {
	while (true) {
		char input;
		std::cout << "Press number for test." << std::endl;
		std::cout << "1: swap_test, 2: min_test, 3: max_test" << std::endl;
		std::cout << "To exit, press other button." << std::endl;
		std::cout << "input: ";
		std::cin >> input;
		switch (input) {
			case '1':
				swap_test();
				break;
			case '2':
				min_test();
				break;
			case '3':
				max_test();
				break;
			default:
				return 0;
		}
	}
	return 0;
}
