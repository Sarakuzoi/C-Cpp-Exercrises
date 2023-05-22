// https://www.pbinfo.ro/probleme/220/prodmax

// Să se determine numerele de ordine ale coloanelor pentru care
// produsul elementelor este maxim.

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("prodmax.in");
ofstream out("prodmax.out");

int has_two[101], has_zero[101];

int main()
{
    int m, n, maxi = 0, a[101][101];
    in >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            in >> a[i][j];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (a[j][i] == 2)
                has_two[i]++;
            if (a[j][i] == 0)
                has_zero[i]++;
        }
    for (int i = 1; i <= n; i++)
    {
        if (has_zero[i])
            has_two[i] = 0;
        if (has_two[i] > maxi)
            maxi = has_two[i];
    }

    for (int i = 1; i <= n; i++)
    {
        if (has_two[i] == maxi)
            out << i << ' ';
    }
    return 0;
}
