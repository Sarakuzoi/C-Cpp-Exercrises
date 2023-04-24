// https://www.pbinfo.ro/probleme/2800/chenar1

// Scrieți un program care citește de la tastatură două numere naturale
// din intervalul [3,50], n și m, și elementele unui tablou bidimensional
// cu n linii și m coloane, numere naturale din intervalul [0,104].
// Programul modifică în memorie tabloul dat, atribuind valoarea
// elementului aflat pe ultima linie și pe ultima coloană a tabloului
// fiecărui element aflat pe conturul acestuia (pe prima linie, ultima
// linie, prima coloană, ultima coloană), apoi afișează pe ecran tabloul
// modificat, câte o linie a tabloului pe câte o linie a ecranului,
// elementele fiecărei linii fiind separate prin câte un spațiu.

#include <iostream>

using namespace std;

int main()
{
    int n, m, a[51][51];
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++)
    {
        a[i][1] = a[n][m];
        a[i][m] = a[n][m];
    }
    for (int i = 1; i <= m; i++)
    {
        a[1][i] = a[n][m];
        a[n][i] = a[n][m];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
