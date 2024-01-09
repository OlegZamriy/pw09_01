#ifndef BINARY_STRING_H
#define BINARY_STRING_H

#include "string.h"

class BinaryString : public String {
public:
    BinaryString();                         
    BinaryString(const char* cString);      
    BinaryString(const BinaryString& other);
    BinaryString& operator=(const BinaryString& other); 
    ~BinaryString();                        

    void flipSign();                        
    BinaryString operator+(const BinaryString& other) const;
    BinaryString& operator+=(const BinaryString& other);

    bool operator==(const BinaryString& other) const;
    bool operator!=(const BinaryString& other) const;
};

#endif // BINARY_STRING_H
