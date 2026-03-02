#include <iostream>
int main() {
    std::cout << "Podaj napis, ktory chcesz zapisac w postaci szesnastkowej \n";
    std::string given_string;
    std::cin >> given_string;
    while (given_string.length() == 0)
    {
        std::cout << "Niepoprawna ilosc znakow" << std::endl;
        std::cin >> given_string;
    }

    
    for (int i = 0; i < given_string.length(); i++)
    {
        std::printf("%x", given_string[i]);
    }
    
    return 0;
}
