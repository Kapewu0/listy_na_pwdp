/*
    Konrad Marciniak
    Lista 2 Zadanie 5
    Użyj std::format lub std::print, by wyświetlić szesnastkową wartość znaku przejścia do nowej linii: '\n'.
    Jaki jest związek uzyskanej odpowiedzi z treścią poprzedniego zadania?
    
    Odpowiedź na pytanie
    Wykorzystany znak o wartości szesnastkowej 0a był znakiem przejścia do nowej linii.
*/

#include <iostream>
#include <format>

int main() {
    std::cout << std::format("{:#04x}", '\n');
}
