#include <iostream>
#include "String.h"

String::String() {
    this->lenght = 1;
    this->text = new char[1];
    this->text[0] = '\0';
}

String::String(const char* text) {
    if (text == nullptr) {
        text = "";
    }
    this->lenght = static_cast<int>(strlen(text)) + 1;
    this->text = new char[this->lenght];
    strcpy_s(this->text, this->lenght, text);
}

String::String(const String& other) {
    this->lenght = other.lenght;
    this->text = new char[this->lenght];
    strcpy_s(this->text, this->lenght, other.text);
}

String::~String() {
    if (text != nullptr) {
        delete[] text;
    }
}

void String::copyFrom(const String& other) {
    if (this != &other) {
        if (this->text != nullptr) {
            delete[] this->text;
        }
        this->lenght = other.lenght;
        this->text = new char[this->lenght];
        strcpy_s(this->text, this->lenght, other.text);
    }
}
