// https://www.pbinfo.ro/probleme/213/genmat4

// Scrieţi un program care citeşte de la tastatură un număr natural n
// şi construieşte în memorie o matrice cu n linii şi n coloane ale cărei elemente vor primi
// valori după cum urmează: elementul din linia i şi coloana j primeşte ca valoare
// ultima cifră a produsului i*j (1≤i≤n şi 1≤j≤n).

#include <iostream>

using namespace std;

int main()
{
    int n, a[25][25];
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            a[i][j] = (i * j) % 10;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
