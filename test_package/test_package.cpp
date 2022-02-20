#include <BigIntegerLibrary.hh>

#include <iostream>

int main() {
    BigInteger a = 65536;
    std::cout << a << "^6 = " << a * a * a * a * a * a << std::endl;
    return 0;
}
