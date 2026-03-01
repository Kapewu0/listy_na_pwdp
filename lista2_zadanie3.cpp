#include <iostream>
int main() {
    std::string green_color = "\033[1;32m";
    std::string red_color = "\033[1;31m";
    std::cout << green_color << "Konrad " << red_color << "Marciniak";
    return 0;
}
