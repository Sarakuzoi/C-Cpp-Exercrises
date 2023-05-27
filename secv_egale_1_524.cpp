// https://www.pbinfo.ro/probleme/524/secvegale1

// Se dă un vector cu n elemente, numere naturale. Determinați cea mai
// lungă secvență de elemente din vector care începe și se termină cu
// aceeași valoare. Dacă în vector există mai multe secvențe corecte de
// lungime maximă se va determina cea mai din stânga.

#include <iostream>

using namespace std;

int main()
{
    struct pozitie
    {
        int st;
        int dr;
    } poz;

    int n, v[1001], lmax = 0;

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
        for (int j = n; j > i; j--)
            if (v[j] == v[i] && j - i > lmax)
            {
                lmax = j - i;
                poz.st = i;
                poz.dr = j;
            }

    cout << poz.st << ' ' << poz.dr;
    return 0;
}
