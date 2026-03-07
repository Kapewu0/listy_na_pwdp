/*
    Konrad Marciniak
    Lista 3 Zadanie 4
    Ciąg Collatza dany jest wzorem rekurencyjnym. Napisz program, który będzie wczytywał c_1 z konsoli, a następnie wypisywał na ekranie 20 kolejnych elementów tego ciągu.
*/
#include <iostream>
int main()
{
    int number;
    std::cout << "Podaj początkową liczbę: ";
    std::cin >> number;
    for (int i = 2; i < 22; i++) // 20 kolejnych więc zaczynam od 2 wyrazu zakładając, że 1 wyrazem jest ten podany przez użytkownika
    {
        if (number % 2 == 0)
        {
            number = number / 2;
        }
        else if (number % 2 != 0)
        {
            number = 3 * number + 1;
        }
        printf("Wyraz %i: %i\n", i, number);
    }
}
