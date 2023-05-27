// https://www.pbinfo.ro/probleme/862/nrsecvente

// Se dă un vector cu n elemente, numere naturale și două numere t și k.
// Să se determine câte secvențe din șir au lungimea k și sunt formate
// din valori mai mici sau egale cu t.

#include <iostream>

using namespace std;

int main()
{
    int n, t, k, x, lun = 0, c = 0;
    cin >> n >> t >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        x <= t ? lun++ : lun = 0;
        if (lun >= k)
            c++;
    }
    cout << c;
    return 0;
}
