/*
    Konrad Marciniak
    Lista 3 Zadanie 1
    Napisz program, który wczyta słowo, po czym wypisze je w wspak. Np po wczytaniu "Ala", program ten powinien wypisać słowo "alA".
    Wskazówka: obiekty klasy std::string można traktować jak tablice znaków (czyli stosować na nich operartor []).
*/
#include <iostream>
int main()
{
    std::cout << "Podaj słowo, które chcesz wypisać wspak" << std::endl;
    std::string prompted_string;
    std::cin >> prompted_string;
    for (int i = prompted_string.length() - 1; i >= 0; i--)
    {
        std::cout << prompted_string[i];
    }
    std::cout << std::endl;
}
