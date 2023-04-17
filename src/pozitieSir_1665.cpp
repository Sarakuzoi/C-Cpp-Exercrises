// https://www.pbinfo.ro/probleme/1665/pozitiesir

// Considerăm şirul a cu n numere naturale nenule distincte două câte două şi un număr x.
// Scrieţi un program care determină poziţia pe care se va găsi numărul x în şirul a,
// dacă acesta ar fi ordonat descrescător.

#include <iostream>

using namespace std;

int main()
{
    int n, x, aux, cnt = 1;
    bool x_exists = false;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        cin >> aux;
        if (aux == x)
            x_exists = true;
        if (aux > x)
            cnt++;
    }
    x_exists ? cout << cnt : cout << -1;
    return 0;
}
