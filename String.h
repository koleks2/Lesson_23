#pragma once
class String {
private:
	char* text = nullptr;
	int lenght = 0;
public:
	String(const char* text);

	String(const String& other);

	~String();

	int GetStringLenght() {
		return lenght - 1;
	}

	const char* c_str() const {
		return text;
	}

};

