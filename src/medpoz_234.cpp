// https://www.pbinfo.ro/probleme/234/medpoz

// Să se determine media aritmetică a elementelor strict pozitive din matrice,
// care sunt situate sub diagonala principală.

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

ifstream in("medpoz.in");
ofstream out("medpoz.out");

int main()
{
    int n, a[21][21], cnt = 0;
    float s = 0;
    in >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            in >> a[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (i > j && a[i][j] > 0)
            {
                s += a[i][j];
                cout << a[i][j] << endl;
                cnt++;
            }
    if (cnt)
    {
        out << fixed << setprecision(3) << s / cnt;
    }
    else
    {
        out << "NU EXISTA";
    }
    return 0;
}
