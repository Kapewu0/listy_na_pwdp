/*
    Konrad Marciniak
    Lista 2 Zadanie 6
    Napisz program, który z konsoli wczyta napis do std::string i wyświetli jego postać w kodowaniu Base16.
    Brzmi strasznie, ale tak naprawdę chodzi o to, by każdy znak wyświetlić w reprezentacji szesnastkowej.
    Najprostszy sposób przejrzenia zawartości obiektu napis typu std::string litera po literze:

*/

#include <iostream>
int main() {
    std::cout << "Podaj napis, który chcesz zapisać w postaci szesnastkowej: \n";
    std::string given_string;
    std::cin >> given_string;

    for (int i = 0; i < given_string.length(); i++)
    {
        std::printf("%x", given_string[i]);
    }
    
}
