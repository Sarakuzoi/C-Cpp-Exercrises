// https://www.pbinfo.ro/probleme/214/genmat5

// Scrieţi un program care citeşte de la tastatură un număr natural nenul
// n cu cel mult 9 cifre şi construieşte un tablou bidimensional pătratic
// cu dimensiunea egală cu numărul de cifre ale lui n, completată cu
// cifrele lui n.
// Elementele de pe prima coloană vor fi egale cu cifra unităţilor lui n,
//  elementele de pe a doua coloană vor fi egale cu cifra zecilor, etc.

#include <iostream>

using namespace std;

int length(int n)
{
    int cif = 0;
    while (n != 0)
    {
        cif++;
        n /= 10;
    }
    return cif;
}

int main()
{
    int n, a[10][10];
    cin >> n;
    int len = length(n);
    for (int i = 1; i <= len; i++)
    {
        for (int j = 1; j <= len; j++)
            a[j][i] = n % 10;
        n /= 10;
    }
    for (int i = 1; i <= len; i++)
    {
        for (int j = 1; j <= len; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
