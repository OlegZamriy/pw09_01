// string.h
#ifndef STRING_H
#define STRING_H

#include <iostream>

class String {
public:
    
    String();                               
    String(const char* cString);           
    String(const String& other);           
    String& operator=(const String& other); 
    ~String();                              

    size_t length() const;                  
    void clear();                           
    void concatenate(const String& other);  

    bool operator==(const String& other) const;
    bool operator!=(const String& other) const;

    String operator+(const String& other) const;
    String& operator+=(const String& other);

    friend std::ostream& operator<<(std::ostream& os, const String& str);

protected:
    char* data;
    size_t len;
};

#endif // STRING_H

