// https://www.pbinfo.ro/probleme/217/genmat8

// Scrieţi un program care citeşte de la tastatură un număr natural n şi construieşte în memorie
// o matrice cu n linii şi n coloane, numerotate de la 1 la n, în care elementele de pe liniile cu
// indice impar sunt egale cu indicele de linie, iar elementele situate pe linii cu indice par sunt
// egale cu indicele de coloană.

#include <iostream>

using namespace std;

int main()
{
    int n, a[25][25];
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            i % 2 == 1 ? a[i][j] = i : a[i][j] = j;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}