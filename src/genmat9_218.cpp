// https://www.pbinfo.ro/probleme/218/genmat9

// Scrieţi un program care citeşte de la tastatură un număr natural n şi
// construieşte în memorie o matrice cu n linii şi n coloane, numerotate
// de la 1 la n, în care fiecare element aflat pe chenarul exterior
// al matricei este egal cu suma dintre indicele liniei şi indicele
// coloanei pe care se află, iar fiecare dintre celelalte elemente este egal
// cu suma celor trei “vecini” situaţi în matrice pe linia anterioară.

#include <iostream>

using namespace std;

int main()
{
    int n, a[17][17];
    cin >> n;
    for (int i = 0; i <= n + 1; i++)
    {
        a[0][i] = 0;
        a[i][0] = 0;
        a[n + 1][i] = 0;
        a[i][n + 1] = 0;
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (i == 1 || j == 1 || i == n || j == n)
                a[i][j] = i + j;
    for (int i = 2; i <= n - 1; i++)
        for (int j = 2; j <= n - 1; j++)
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
