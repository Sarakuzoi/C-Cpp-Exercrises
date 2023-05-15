// https://www.pbinfo.ro/probleme/225/genmat12

//  Scrieţi un program care citeşte de la tastatură doua numere naturale n şi k
// şi construieşte în memorie o matrice cu n linii şi n coloane formată numai din valori
// 1, 2, 3 şi 4 astfel încât: elementele aflate la intersecţia primelor k linii cu primele
// k coloane sunt egale cu 1, elementele aflate la intersecţia primelor k linii cu ultimele
// n-k coloane sunt egale cu 2, elementele aflate la intersecţia ultimelor n-k linii cu primele
// k coloane sunt egale cu 3, elementele aflate la intersecţia ultimelor n-k linii
// cu ultimele n-k coloane sunt egale cu 4.

#include <iostream>

using namespace std;

int main()
{
    int n, k, a[25][25];
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (i <= k && j <= k)
                a[i][j] = 1;
            if (i <= k && j > k)
                a[i][j] = 2;
            if (i > k && j <= k)
                a[i][j] = 3;
            if (i > k && j > k)
                a[i][j] = 4;
        }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}