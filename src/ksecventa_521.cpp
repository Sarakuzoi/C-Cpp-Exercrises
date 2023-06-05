// https://www.pbinfo.ro/probleme/521/ksecventa

// Se dă un vector cu n elemente, numere naturale, și un număr k,
// divizor al lui n. Se împarte vectorul în k secvențe disjuncte,
// numerotate de la 1 la k. Să se stabilească dacă există două secvențe
// identice.

#include <iostream>

using namespace std;

int main()
{
    int n, k, v[1001], cnt = 0, aux = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n; i += n / k)
        for (int j = i + n / k; j <= n; j++)
        {
            if (v[i + cnt] == v[j])
                aux++;
            cnt++;
            if (aux == n / k)
            {
                cout << i / (n / k) + 1 << ' ' << (j - aux + 1) / (n / k) + 1;
                return 0;
            }
            if (cnt == n / k)
            {
                cnt = 0;
                aux = 0;
            }
        }
    cout << "NU";
    return 0;
}