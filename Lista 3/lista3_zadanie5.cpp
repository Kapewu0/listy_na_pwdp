/*
    Konrad Marciniak
    Lista 3 Zadanie 5
    Napisz program, który wczyta słowo, po czym wypisze je na ekranie, przy czym znaki będą wyświetlane na przemian w kolorach czerwonym i zielonym.
    Jak wyświetlać kolorowy tekst - patrz poprzednia lista.
*/
#include <iostream>
int main()
{
    std::string green_color = "\033[1;32m";
    std::string red_color = "\033[1;31m";
    std::string user_input;
    printf("Podaj napis, który chcesz pokolorować: ");
    std::cin >> user_input;
    for (int i = 0; i < user_input.length(); i++)
    {
        if (i % 2 == 0)
        {
            std::cout << red_color << user_input[i];
        }
        else
        {
            std::cout << green_color << user_input[i];
        }
    }
    std::cout << "\033[0m" << std::endl;
}
