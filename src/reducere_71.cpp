// https://www.pbinfo.ro/probleme/71/reducere

// Se dau două tablouri A și B. Să se verifice dacă tabloul A se poate
// reduce la tabloul B.
// Programul va citi mai multe seturi de date, fiecare constând în doi
// vectori A, B și va afișa pentru fiecare set de date dacă tabloul A se
// poate reduce la tabloul B.

#include <iostream>

using namespace std;

int main()
{
    int t, n, m, a[1001], b[1001], t_vec[11];
    cin >> t;
    for (int j = 1; j <= t; j++)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        cin >> m;
        for (int i = 1; i <= m; i++)
            cin >> b[i];
        int b_index = 1, sum = 0;
        for (int i = 1; i <= n; i++)
        {
            // cout << a[i] << ' ';
            sum += a[i];
            if (sum == b[b_index])
            {
                b_index++;
                sum = 0;
            }
        }
        if (b_index - 1 == m && !sum)
            t_vec[j] = 1;
        else
            t_vec[j] = 0;
    }
    for (int j = 1; j <= t; j++)
        cout << t_vec[j] << '\n';
    return 0;
}