// https://www.pbinfo.ro/probleme/3791/interclasnomemory

// Se dau două șiruri de numere naturale, cu n, respectiv m elemente,
// ordonate crescător. Să se scrie definiția funcției interclasare care
// nu are parametri și nu întoarce niciun rezultat, și care să determine
// al treilea șir care să conţină, în ordine crescătoare, elementele din
// primele două şiruri.

#include <iostream>
#include <fstream>

using namespace std;

void interclasare()
{
    ifstream fin("file1.txt");
    ifstream sin("file2.txt");
    ofstream out("file.out");

    int n, m, i = 1, j = 1, x, y;
    fin >> n;
    sin >> m;
    fin >> x;
    sin >> y;
    while (i <= n && j <= m)
    {
        if (x <= y)
        {
            out << x << ' ';
            i++;
            if (i <= n)
                fin >> x;
        }
        else
        {
            out << y << ' ';
            j++;
            if (j <= m)
                sin >> y;
        }
    }
    while (i <= n)
    {
        out << x << ' ';
        i++;
        if (i <= n)
            fin >> x;
    }
    while (j <= m)
    {
        out << y << ' ';
        j++;
        if (j <= m)
            sin >> y;
    }
}

int main()
{
    interclasare();
    return 0;
}
