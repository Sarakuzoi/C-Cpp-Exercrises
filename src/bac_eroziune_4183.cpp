// https://www.pbinfo.ro/probleme/4183/bac-eroziune

// Scrieți un program C/C++ care citește de la tastatură două numere
// naturale L și C, apoi elementele unui tablou bidimensional cu L
// linii şi C coloane reprezentând nivelurile parcelelor, în ordinea
// dispunerii acestora pe plajă și determină cantitatea totală de nisip
// adăugată, măsurată în metri cubi.

#include <iostream>

using namespace std;

int minim(int a, int b, int c, int d)
{
    int mini = a;
    if (mini > b)
        mini = b;
    if (mini > c)
        mini = c;
    if (mini > d)
        mini = d;
    return mini;
}

int main()
{
    int l, c, a[105][105], s = 0;
    cin >> l >> c;
    for (int i = 1; i <= l; i++)
        for (int j = 1; j <= c; j++)
            cin >> a[i][j];
    for (int i = 0; i <= l + 1; i++)
    {
        a[i][0] = 11;
        a[i][c + 1] = 11;
    }
    for (int i = 0; i <= c + 1; i++)
    {
        a[0][i] = 11;
        a[l + 1][i] = 11;
    }
    for (int i = 1; i <= l; i++)
        for (int j = 1; j <= c; j++)
        {
            int min_vecini = minim(a[i - 1][j], a[i + 1][j], a[i][j - 1], a[i][j + 1]);
            if (a[i][j] < min_vecini)
                s += (min_vecini - a[i][j]);
        }
    cout << s;
    return 0;
}