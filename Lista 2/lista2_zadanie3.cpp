/*
    Konrad Marciniak
    Lista 2 Zadanie 3
    Pod tym linkiem w serwisie Stack Overflow: https://stackoverflow.com/questions/2616906/how-do-i-output-coloured-text-to-a-linux-terminal 
    znaleźć można odpowiedzi na pytanie, w jaki sposób można wyświetlić na ekranie terminala kolorowy tekst.
    Używając zawartych tam informacji napisz program, który wypisze twoje imię czcionką zieloną,
    a nazwisko - czerwoną. Uwaga: różne terminale różnie implementują sposoby zarządzania kolorem w terminalu.
    Użytkownicy systemu Windows używają go na własne ryzyko.

*/

#include <iostream>
int main() {
    std::string green_color = "\033[1;32m";
    std::string red_color = "\033[1;31m";
    std::cout << green_color << "Konrad " << red_color << "Marciniak" << "\033[0m";
}
