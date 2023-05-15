// https://www.pbinfo.ro/probleme/3266/sir147

// Fișierul sir147.in memorează cel mult 10000 de numere naturale cu cel mult nouă cifre.
// Numerele sunt ordonate strict crescător și separate prin câte un spațiu.
// Se consideră șirul 1, 4, 7, …. definit astfel: f1=1, f2=4 si fn=fn−1∗2−fn−2
// pentru n > 2. Se cere să se scrie în fișierul sir147.out numerele din fișier
// care sunt termeni ai șirului. Numerele sunt afișate în ordine strict crescătoare,
// separate prin câte un spațiu.

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("sir147.in");
ofstream out("sir147.out");

int main()
{
    int x;
    while (in >> x)
        if (x % 3 == 1)
            out << x << ' ';
    return 0;
}
