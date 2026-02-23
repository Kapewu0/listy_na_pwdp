#include <iostream>
int main() {
    std::string first_string = "first string";
    std::string second_string = "second string";
    std::cout << "Rozmiar wyrazu kot: " << sizeof("kot") << "\n"; // każdy znak zajmuje 1 bajt + 1 do całego zdania
    std::cout << "Rozmiar wyrazu koniczyna: " << sizeof("koniczyna") << "\n";
    std::cout << "Rozmiar wyrazu źdźbło: " << sizeof("źdźbło") << "\n"; // każdy polski znak zajmuje 2 bajty
    std::cout << "Rozmiar pierwszego wyrazu: " << sizeof(first_string) << "\n";
    std::cout << "Rozmiar drugiego wyrazu: " << sizeof(second_string) << "\n";
    return 0;
}
