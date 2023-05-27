// https://www.pbinfo.ro/probleme/519/secventa1

// Se dă un vector x cu n elemente, numere naturale și un vector y cu m
// elemente, numere naturale. Să se verifice dacă vectorul y este secvență
// în vectorul x.

#include <iostream>

using namespace std;

int main()
{
    int x[1001], y[1001], n, m, p = -1, j = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i];
    cin >> m;
    for (int i = 1; i <= m; i++)
        cin >> y[i];
    for (int i = 1; i <= n; i++)
    {
        if (x[i] == y[1] && p == -1)
            p = i;
        if (p != -1)
        {
            if (j == m && x[i] == y[m])
                break;
            if (x[i] == y[j])
                j++;
            else
            {
                j = 1;
                p = -1;
            }
        }
        if (x[i] == y[1] && p == -1)
            i--;
    }
    p == -1 ? cout << "NU" : cout << p;
    return 0;
}
