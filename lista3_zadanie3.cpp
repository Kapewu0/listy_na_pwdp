/*
    Konrad Marciniak
    Lista 3 Zadanie 3
    Napisz program, który w równych kolumnach wyświetla tabliczkę mnożenia.
    Wskazówka: chyba najłatwiej kwestię "równych kolumn" rozwiązać przy pomocy std::format lub std::print.
*/
#include <iostream>
int main()
{

    for (int first_number = 1; first_number <= 10; first_number++)
    {
        for (int second_number = 1; second_number <= 10; second_number++)
        {
            printf("%3i ", first_number * second_number);
        }
        printf("\n");
    }
}
