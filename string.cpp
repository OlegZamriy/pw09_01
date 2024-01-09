#include "string.h"
#include <cstring>

String::String() : data(nullptr), len(0) {}

String::String(const char* cString) : len(strlen(cString)) {
    data = new char[len + 1];
    strcpy(data, cString);
}

String::String(const String& other) : len(other.len) {
    data = new char[len + 1];
    strcpy(data, other.data);
}

String& String::operator=(const String& other) {
    if (this != &other) {
        delete[] data;
        len = other.len;
        data = new char[len + 1];
        strcpy(data, other.data);
    }
    return *this;
}

String::~String() {
    delete[] data;
}

size_t String::length() const {
    return len;
}

void String::clear() {
    delete[] data;
    data = nullptr;
    len = 0;
}

void String::concatenate(const String& other) {
    char* newData = new char[len + other.len + 1];
    strcpy(newData, data);
    strcat(newData, other.data);
    delete[] data;
    data = newData;
    len += other.len;
}

bool String::operator==(const String& other) const {
    return (len == other.len) && (strcmp(data, other.data) == 0);
}

bool String::operator!=(const String& other) const {
    return !(*this == other);
}

String String::operator+(const String& other) const {
    String result(*this);
    result.concatenate(other);
    return result;
}

String& String::operator+=(const String& other) {
    concatenate(other);
    return *this;
}

std::ostream& operator<<(std::ostream& os, const String& str) {
    os << str.data;
    return os;
}
