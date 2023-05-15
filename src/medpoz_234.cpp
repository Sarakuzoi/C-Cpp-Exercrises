// https://www.pbinfo.ro/probleme/234/medpoz

// Să se determine media aritmetică a elementelor strict pozitive din matrice,
// care sunt situate sub diagonala principală.

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("medpoz.in");
ofstream out("medpoz.out");

int main()
{
    int n, a[21][21];
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (i <= j)
    // TODO
}
