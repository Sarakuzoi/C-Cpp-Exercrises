// https://www.pbinfo.ro/probleme/239/nrlipsa

// Se dau mai multe numere naturale cu cel mult 9 cifre fiecare.
// Să se determine cele mai mari două numere de 3 cifre care nu se găsesc
//  printre numerele date.

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("nrlipsa.in");
ofstream out("nrlipsa.out");

int cif[1000];

int main()
{
    int x, cnt = 0, nr = 0;
    while (in >> x)
        if (x < 1000)
            cif[x] = 1;
    for (int i = 100; i <= 999; i++)
        nr += cif[i];
    if (nr <= 898)
    {
        for (int i = 999; i >= 100; i--)
        {
            if (!cif[i])
            {
                cnt++;
                out << i << ' ';
            }
            if (cnt == 2)
                break;
        }
    }
    else
        out << "NU";
    return 0;
}
