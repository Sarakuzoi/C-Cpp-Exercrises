// https://www.pbinfo.ro/probleme/247/cifreord1

// Se dau mai multe numere naturale, fiecare cu cel mult 9 cifre.
// Să se afişeze, în ordine descrescătoare, toate cifrele care apar în
// numerele date.

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("cifreord1.in");
ofstream out("cifreord1.out");

int cif[10];

int main()
{
    int x, cnt = 0;
    while (in >> x)
        do
        {
            cif[x % 10]++;
            x /= 10;
        } while (x != 0);
    for (int i = 9; i >= 0; i--)
    {
        while (cif[i] != 0)
        {
            out << i << ' ';
            cnt++;
            cif[i]--;
            if (cnt == 20)
            {
                out << endl;
                cnt = 0;
            }
        }
    }
    return 0;
}
