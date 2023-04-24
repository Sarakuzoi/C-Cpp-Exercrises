// https://www.pbinfo.ro/probleme/274/3minime

// Se dau n numere naturale. Determinaţi cele mai mici trei numere dintre cele date.

#include <iostream>

using namespace std;

int main()
{
    int n, v[101], aux;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    // Not most optimal, still gets 100
    for (int i = 1; i <= n - 1; i++)
        for (int j = i + 1; j <= n; j++)
            if (v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
    cout << v[3] << ' ' << v[2] << ' ' << v[1];
}