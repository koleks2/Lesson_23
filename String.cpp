#include <iostream>
#include "String.h"

String::String(const char* text) {
	this->lenght = strlen(text) + 1;

	this->text = new char[this->lenght];
	strcpy_s(this->text, this->lenght, text);
}

String::String(const String& other) {
	this->lenght = other.lenght;
	this->text = new char[this->lenght];
	strcpy_s(this->text, this->lenght, other.text);
}

String::~String() {
	if (text != nullptr) delete[] text;
}
