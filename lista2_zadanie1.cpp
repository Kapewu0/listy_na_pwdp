/*
    Konrad Marciniak
    Lista 2 Zadanie 1 
    Napisz program, który:

    Wczytuje imię
    ­­■ Prosi użytkownika o podanie imienia
    ■ Prosi użytkownika o podanie nazwiska
    ■ Wczytuje nazwisko
    ■ Wyświetla imię i nazwisko

*/

#include <iostream>
int main() {
    std::string name, surname;
    std::cout << "Podaj imię \n";
    std::cin >> name;
    std::cout << "Podaj nazwisko \n";
    std::cin >> surname;
    std::cout << name << " " << surname << "\n";
}
