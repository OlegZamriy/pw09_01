#include "binary_string.h"

BinaryString::BinaryString() : String() {}

BinaryString::BinaryString(const char* cString) {
    len = strlen(cString);
    data = new char[len + 1];

    for (size_t i = 0; i < len; ++i) {
        if (cString[i] != '0' && cString[i] != '1') {
            clear();
            return;
        }
        data[i] = cString[i];
    }
    data[len] = '\0';
}

BinaryString::BinaryString(const BinaryString& other) : String(other) {}

BinaryString& BinaryString::operator=(const BinaryString& other) {
    if (this != &other) {
        String::operator=(other);
    }
    return *this;
}

BinaryString::~BinaryString() {}

void BinaryString::flipSign() {
    for (size_t i = 0; i < len; ++i) {
        data[i] = (data[i] == '0') ? '1' : '0';
    }
}

BinaryString BinaryString::operator+(const BinaryString& other) const {
    BinaryString result(*this);
    result.concatenate(other);
    return result;
}

BinaryString& BinaryString::operator+=(const BinaryString& other) {
    concatenate(other);
    return *this;
}

bool BinaryString::operator==(const BinaryString& other) const {
    return String::operator==(other);
}

bool BinaryString::operator!=(const BinaryString& other) const {
    return String::operator!=(other);
}
