#include <iostream>

using namespace std;

int binary_search(int a[], int x, int st, int dr)
{
    if (st > dr)
        return 0;
    if (st == dr || a[(st + dr) / 2] == x)
    {
        return x == a[(st + dr) / 2];
    }
    if (a[(st + dr) / 2] > x)
    {
        return binary_search(a, x, st, (st + dr) / 2 - 1);
    }
    else
    {
        return binary_search(a, x, (st + dr) / 2 + 1, dr);
    }
}

int main()
{
    int a[25001], n, m, x;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> x;
        cout << binary_search(a, x, 1, n) << ' ';
    }
}