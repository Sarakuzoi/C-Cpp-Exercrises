// https://www.pbinfo.ro/probleme/2669/count5

// Se dă un vector cu n numere naturale. Să se determine
// câte dintre perechile de elemente din vector sunt
// formate din valori cu aceeași sumă a cifrelor.

#include <iostream>

using namespace std;

int sum_cif(int x)
{
    int cnt = 0;
    while (x != 0)
    {
        cnt += x % 10;
        x /= 10;
    }
    return cnt;
}

int comb_x_luate_cate_doua(int x)
{
    return ((x - 1) * x) / 2;
}

int main()
{
    int perechi[82] = {0}, n, x, sum = 0;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        perechi[sum_cif(x)]++;
    }

    for (int i = 0; i <= 81; i++)
    {
        if (perechi[i] > 1)
        {
            sum += comb_x_luate_cate_doua(perechi[i]);
        }
    }

    cout << sum;
    return 0;
}