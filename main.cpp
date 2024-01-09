#include "string.h"
#include "binary_string.h"

int main() {
    String str1;                             
    String str2("Hello, ");                 
    String str3 = str2;                      
    str1 = "world!";                         

    std::cout << "String 1: " << str1 << "\n";
    std::cout << "String 2: " << str2 << "\n";
    std::cout << "String 3: " << str3 << "\n";

    str1.concatenate(str2);                  
    std::cout << "Concatenated String 1: " << str1 << "\n";

    std::cout << "Length of String 1: " << str1.length() << "\n";
    str1.clear();                            
    std::cout << "String 1 after clearing: " << str1 << "\n\n";

    BinaryString binStr1;                    
    BinaryString binStr2("1101");            
    BinaryString binStr3 = binStr2;          
    binStr1 = "1010";                        

    std::cout << "Binary String 1: " << binStr1 << "\n";
    std::cout << "Binary String 2: " << binStr2 << "\n";
    std::cout << "Binary String 3: " << binStr3 << "\n";

    binStr1.concatenate(binStr2);            
    std::cout << "Concatenated Binary String 1: " << binStr1 << "\n";

    binStr1.flipSign();                      
    std::cout << "Flipped Binary String 1: " << binStr1 << "\n";

    std::cout << "Length of Binary String 1: " << binStr1.length() << "\n";

    if (binStr1 == binStr3) {
        std::cout << "Binary String 1 and Binary String 3 are equal.\n";
    }
    else {
        std::cout << "Binary String 1 and Binary String 3 are not equal.\n";
    }

    return 0;
}
