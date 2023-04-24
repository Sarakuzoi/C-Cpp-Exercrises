// https://www.pbinfo.ro/probleme/797/subnumar

// Un număr natural x, format din exact două cifre, este numit sub-număr
// al unui număr natural y dacă cifrele lui x apar, în aceeași ordine,
// pe ranguri consecutive, în numărul y.
// Exemplu: 21 este sub-număr al lui 12145, al lui 213, al lui 21,
// dar nu și al lui 123 sau al lui 231.
// Fișierul de intrare conține cel mult 1.000.000 de numere naturale.
// Se cere să se afișeze în fișierul de ieșire, în ordine descrescătoare,
// sub-numerele care apar de cele mai multe ori în scrierea numerelor date.

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("subnumar.in");
ofstream out("subnumar.out");

int subnumar[100];

int main()
{
    int x, max = 0;
    while (in >> x)
        while (x != 0)
        {
            subnumar[x % 100]++;
            x /= 10;
        }
    for (int i = 10; i <= 99; i++)
        if (subnumar[i] > max)
            max = subnumar[i];
    for (int i = 99; i >= 10; i--)
        if (subnumar[i] == max)
            out << i << ' ';
    return 0;
}
