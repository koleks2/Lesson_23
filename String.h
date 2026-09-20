#pragma once
class String {
private:
	char* text = nullptr;
	int lenght = 0;
	int capecity = 20;
public:
	String(const char* text, int capecity);

	String(const String& other);

	~String();

	int GetStringLenght() {
		return lenght - 1;
	}

	const char* c_str() const {
		return text;
	}

};

