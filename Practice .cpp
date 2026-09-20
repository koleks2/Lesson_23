#include <iostream>
#include "String.h"

int main() {
	String text = String("Hello world");
	String text2 = text;

	std::cout << text.c_str() << " - Lenght: " << text.GetStringLenght() << std::endl;
	std::cout << text2.c_str() << " - Lenght: " << text2.GetStringLenght() << std::endl;
	std::cout << ' ';
}