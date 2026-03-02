/*
    Konrad Marciniak
    Lista 2 Zadanie 2
    W języku C++ istnieje operator sizeof, za pomocą którego możemy sprawdzić, ile miejsca w pamięci operacyjnej
    (ale tylko tej zarządzanej przez kompilator podczas kompilacji) zajmuje jakaś zmienna, typ lub wyrażenie.
    Poprawne są wyrażenia sizeof(int), sizeof(2.345), sizeof(n) i sizeof(n + 1), gdzie n to np. zmienna typu int.

    Napisz program, który sprawdzi, jaką wartość zwraca operator sizeof dla kilku napisów (tekstów ujętych w cudzysłowy)
    o różnych długościach, przy czym napisy te mogą zawierać wyłącznie znaki z zestawu ASCII. Np. sizeof("Ala"), sizeof("123!") itp.
    Na tej podstawie wydedukuj zależność ilości pamięci zajmowanej przez taki literał tekstowy od liczby zawartych w nim znaków.
    I niech ten program wyświetli także kilka literałów tekstowych zawierających polskie litery (np. ą, ę, ś, ł itd.)
    wraz z wartością zwracaną przez sizeof. Na tej podstawie wydedukuj, ile bajtów zajmują w twoim systemie polskie litery.
    Uwaga: różne osoby mogą uzyskać różne odpowiedzi.
    I niech ten program tworzy także kilka obiektów typu std::string przechowujących napisy o różnej długości,
    np. std::string s1("1"), std::string s2("sześć") etc. I niech wyświetla wartość zwracaną przez sizeof
    dla każdego z tych obiektów klasy std::string. Wydedukuj na podstawie uzyskanego wyniku, czy te napisy przechowywane są w pamięci zarządzanej przez kompilator.

    Odpowiedź na pytania
    Każdy znak zajmuje 1 bajt, natomiast wypisanie napisu zwraca liczbę znaków powiększoną o 1. Polskie litery (tj.ą, ę, ć itd.) zajmują 2 bajty.
    Ilość zajmowanego miejsca w pamięci w przypadku uprzednio zadeklarowanych zmiennych jest stała i wynosi 32. Jest tak najprawdopodobniej, ze względu
    na to, że podczas wypisywania polecenia sizeof("napis") kompilator wie ile musi przeznaczyć pamięci na taki napis. W przypadku zmiennych
    mogą one zmienić swoją wartość a co za tym idzie, mogą potrzebować więcej miejsca w pamięci, gdyby tak nie zachodziło doszłoby do zawieszenia programu
    lub utraty części informacji zawartych w napisach.  

*/

#include <iostream>
int main() {
    std::string first_string = "sześćdziesiąt";
    std::string second_string = "Ala ma kota";
    std::cout << "Rozmiar wyrazu kot: " << sizeof("kot") << "\n"; // każdy znak zajmuje 1 bajt + 1 do całego zdania
    std::cout << "Rozmiar wyrazu koniczyna: " << sizeof("koniczyna") << "\n";
    std::cout << "Rozmiar wyrazu źdźbło: " << sizeof("źdźbło") << "\n"; // każdy polski znak zajmuje 2 bajty
    std::cout << "Rozmiar pierwszego wyrazu: " << sizeof(first_string) << "\n";
    std::cout << "Rozmiar drugiego wyrazu: " << sizeof(second_string) << "\n";
}
