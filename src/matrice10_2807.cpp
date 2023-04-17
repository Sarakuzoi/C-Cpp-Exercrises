// https://www.pbinfo.ro/probleme/2807/matrice10

// Scrieți un program care citește de la tastatură două numere naturale din intervalul [2,50],
// n și m, și elementele unui tablou bidimensional cu n linii și m coloane,
// numere naturale distincte din intervalul [0,104].

// Programul interschimbă valoarea minimă din ultima coloană a tabloului cu valoarea minimă
// din prima coloană a tabloului, apoi afișează pe ecran tabloul modificat,
// câte o linie a tabloului pe câte o linie a ecranului, elementele fiecărei linii fiind separate
// prin câte un spațiu.

#include <iostream>

using namespace std;

int main()
{
    int n, m, a[51][51], aux;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    int min_first = 10001, min_last = 10001, i_first, i_last;
    for (int i = 1; i <= n; i++)
    {
        if (a[i][1] < min_first)
        {
            min_first = a[i][1];
            i_first = i;
        }
        if (a[i][m] < min_last)
        {
            min_last = a[i][m];
            i_last = i;
        }
    }
    aux = a[i_first][1];
    a[i_first][1] = a[i_last][m];
    a[i_last][m] = aux;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << a[i][j] << ' ';
        cout << '\n';
    }
}