#include <iostream>
int main() {
    std::string name, surname;
    std::cout << "Podaj imię \n";
    std::cin >> name;
    std::cout << "Podaj nazwisko \n";
    std::cin >> surname;
    std::cout << name << " " << surname << "\n";
    return 0;
}
