/*
    Konrad Marciniak
    Lista 3 Zadanie 2
    Napisz program, który wyznaczy przybliżenie s całki dla N = 100 000 000.
*/
#include<iostream>
int main () {
    int N = 100'000'000;
    double sum = 0.0;
    for (int i = 0; i < N; i++)
    {
        sum += float(i)/N*float(i)/N;
    }
    sum = sum / N;
    std::cout << sum << std::endl;
    return 0;
}
