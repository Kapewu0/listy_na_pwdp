/*
    Konrad Marciniak
    Lista 2 Zadanie 4
    Napisz program, który wyświetli bezpośrednio jeden po drugim trzy znaki o wartościach szesnastkowych C4, 84 i 0a.
    Powinieneś ujrzeć literę Ą, a kursor powinien przejść do nowego wiersza. Jeśli coś takiego widzisz, to spróbuj domyślić się,
    jak we współczesnych komputerach kodowane są polskie litery. Pomóc może lektura tej strony Wikipedii: https://pl.wikipedia.org/wiki/Kodowanie_polskich_znak%C3%B3w.
    Jeżeli używasz Windows, to na własną odpowiedzialność - ja nie mam pojęcia, co Twój program tam wyświetli i jak zinterpretuje znak 0a.

*/

#include <iostream>
int main() {
    printf("%c", char(0xC4));
    printf("%c", char(0x84));
    printf("%c", char(0x0a));
}
