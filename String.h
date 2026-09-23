#pragma once
class String {
private:
    char* text = nullptr;
    int lenght = 0;

public:
    String();
    String(const char* text);
    String(const String& other);
    ~String();

    void copyFrom(const String& other);
    int GetStringLenght() {
        return lenght - 1;
    }

    const char* c_str() const {
        return text;
    }
};

