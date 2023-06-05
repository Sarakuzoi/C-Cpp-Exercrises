// https://www.pbinfo.ro/probleme/2921/sumesecv1

// Se dă un șir cu n elemente numere întregi, numerotate de la 1 la n
// și m perechi de indici i j. Pentru fiecare pereche de indici
// se calculează suma elementelor din secvență determinată de cei doi
// indici. Afișați suma maximă obținută.

#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    long long n, m, v[100001], smax = 0, ok = 0, x;

    cin >> n;

    v[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        v[i] = v[i - 1] + x;
    }
    cin >> m;
    while (m)
    {
        int i, j;
        cin >> i >> j;

        if (i > j)
        {
            i = i + j;
            j = i - j;
            i = i - j;
        }

        long long sum = v[j] - v[i - 1];
        if (sum > smax || !ok)
        {
            smax = sum;
            ok = 1;
        }
        m--;
    }

    cout << smax;
    return 0;
}