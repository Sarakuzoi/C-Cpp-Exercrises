// https://www.pbinfo.ro/probleme/208/genmat3

// Scrieţi un program care citeşte de la tastatură două numere naturale
// nenule n şi m şi construieşte în memorie o matrice cu n linii şi m
// coloane astfel încât, parcurgând tabloul linie cu linie de sus în jos
// şi fiecare linie de la stânga la dreapta, să se obţină şirul primelor
// n*m pătrate perfecte impare , ordonat strict crescător.

#include <iostream>

using namespace std;

int main()
{
    int n, m, a[21][21], cnt = 1;

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            a[i][j] = cnt * cnt;
            cnt += 2;
        }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
}
