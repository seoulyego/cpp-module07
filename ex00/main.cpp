#include "whatever.hpp"
#include <string>
#include <iostream>

void swapTest(void) {
	std::cout << "\t===== swap test =====" << std::endl;
	{
		int int_a, int_b;
		std::cout << "\tEnter a integer" << std::endl;
		std::cout << "\tint_a: ";
		std::cin >> int_a;
		std::cout << "\tint_b: ";
		std::cin >> int_b;
		std::cout << std::endl;

		std::cout << "\tbefore_swap: " << int_a << ", " << int_b << std::endl;
		::swap(int_a, int_b);
		std::cout << "\tafter_swap: " << int_a << ", " << int_b << std::endl;
	}
	std::cout << std::endl;
	{
		char char_a, char_b;
		std::cout << "\tEnter a character" << std::endl;
		std::cout << "\tchar_a: ";
		std::cin >> char_a;
		std::cout << "\tchar_b: ";
		std::cin >> char_b;
		std::cout << std::endl;

		std::cout << "\tbefore_swap: " << char_a << ", " << char_b << std::endl;
		::swap(char_a, char_b);
		std::cout << "\tafter_swap: " << char_a << ", " << char_b << std::endl;
	}
	std::cout << std::endl;
	{
		std::string string_a, string_b;
		std::cout << "\tEnter a string" << std::endl;
		std::cout << "\tstring_a: ";
		std::cin >> string_a;
		std::cout << "\tstring_b: ";
		std::cin >> string_b;
		std::cout << std::endl;

		std::cout << "\tbefore_swap: " << string_a << ", " << string_b << std::endl;
		::swap(string_a, string_b);
		std::cout << "\tafter_swap: " << string_a << ", " << string_b << std::endl;
	}
	std::cout << std::endl;
}

void minTest(void) {
	std::cout << "\t===== min test =====" << std::endl;
	{
		int int_a, int_b;
		std::cout << "\tEnter a integer" << std::endl;
		std::cout << "\tint_a: ";
		std::cin >> int_a;
		std::cout << "\tint_b: ";
		std::cin >> int_b;
		std::cout << std::endl;

		std::cout << "\tint_a = " << int_a << ", int_b = " << int_b << std::endl;
		std::cout << "\tmin: " << ::min(int_a, int_b) << std::endl;
	}
	std::cout << std::endl;
	{
		char char_a, char_b;
		std::cout << "\tEnter a character" << std::endl;
		std::cout << "\tchar_a: ";
		std::cin >> char_a;
		std::cout << "\tchar_b: ";
		std::cin >> char_b;
		std::cout << std::endl;

		std::cout << "\tchar_a = " << char_a << ", char_b = " << char_b << std::endl;
		std::cout << "\tmin: " << ::min(char_a, char_b) << std::endl;
	}
	std::cout << std::endl;
	{
		std::string string_a, string_b;
		std::cout << "\tEnter a string" << std::endl;
		std::cout << "\tstring_a: ";
		std::cin >> string_a;
		std::cout << "\tstring_b: ";
		std::cin >> string_b;
		std::cout << std::endl;

		std::cout << "\tstring_a = " << string_a << ", string_b = " << string_b << std::endl;
		std::cout << "\tmin: " << ::min(string_a, string_b) << std::endl;
	}
	std::cout << std::endl;
}

void maxTest(void) {
	std::cout << "\t===== max test =====" << std::endl;
	{
		int int_a, int_b;
		std::cout << "\tEnter a integer" << std::endl;
		std::cout << "\tint_a: ";
		std::cin >> int_a;
		std::cout << "\tint_b: ";
		std::cin >> int_b;
		std::cout << std::endl;

		std::cout << "\tint_a = " << int_a << ", int_b = " << int_b << std::endl;
		std::cout << "\tmax: " << ::max(int_a, int_b) << std::endl;
	}
	std::cout << std::endl;
	{
		char char_a, char_b;
		std::cout << "\tEnter a character" << std::endl;
		std::cout << "\tchar_a: ";
		std::cin >> char_a;
		std::cout << "\tchar_b: ";
		std::cin >> char_b;
		std::cout << std::endl;

		std::cout << "\tchar_a = " << char_a << ", char_b = " << char_b << std::endl;
		std::cout << "\tmax: " << ::max(char_a, char_b) << std::endl;
	}
	std::cout << std::endl;
	{
		std::string string_a, string_b;
		std::cout << "\tEnter a string" << std::endl;
		std::cout << "\tstring_a: ";
		std::cin >> string_a;
		std::cout << "\tstring_b: ";
		std::cin >> string_b;
		std::cout << std::endl;

		std::cout << "\tstring_a = " << string_a << ", string_b = " << string_b << std::endl;
		std::cout << "\tmax: " << ::max(string_a, string_b) << std::endl;
	}
	std::cout << std::endl;
}

void subjectTest(void) {
	std::cout << "\t===== test in subject =====" << std::endl;
	{
		int a = 2;
		int b = 3;

		::swap( a, b );
		std::cout << "\ta = " << a << ", b = " << b << std::endl;
		std::cout << "\tmin( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "\tmax( a, b ) = " << ::max( a, b ) << std::endl;
	}
	std::cout << std::endl;
	{
		std::string c = "chaine1";
		std::string d = "chaine2";

		::swap(c, d);
		std::cout << "\tc = " << c << ", d = " << d << std::endl;
		std::cout << "\tmin( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "\tmax( c, d ) = " << ::max( c, d ) << std::endl;
	}
	std::cout << std::endl;
}

int main(void) {
	while (true) {
		char input;
		std::cout << "Press number for test." << std::endl;
		std::cout << "1: swap_test, 2: min_test, 3: max_test, 4: test in subject" << std::endl;
		std::cout << "or Press X to exit." << std::endl;
		std::cout << "input: ";
		std::cin >> input;
		switch (input) {
			case '1':
				swapTest();
				break;
			case '2':
				minTest();
				break;
			case '3':
				maxTest();
				break;
			case '4':
				subjectTest();
				break;
			case 'x':
				std::cout << std::endl;
				std::cout << "Thank you for your mercy." << std::endl;
				return 0;
			default:
				std::cout << std::endl;
				std::cout << "You're kidding, right?" << std::endl;
				std::cout << std::endl;
		}
	}
	return 0;
}
