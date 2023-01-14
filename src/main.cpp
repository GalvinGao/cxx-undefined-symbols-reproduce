#include "cxxreproduce/src/lib.rs.h"
#include <iostream>


int main() {
    std::cout << "starting from C++" << std::endl;
    rust::String value = httpbin_hello();
    std::string s = value.operator std::string();
    std::cout << "c++ received string: \"" << s << "\"" << std::endl;
    std::cout << "finishing with C++" << std::endl;
    return 0;
}