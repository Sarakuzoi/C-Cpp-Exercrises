// https://www.pbinfo.ro/probleme/206/genmat1

// Scrieţi un program care citeşte de la tastatură două numere naturale nenule n şi m
// şi care construieşte în memorie şi apoi afişează o matrice A cu n linii
// (numerotate de la 1 la n) şi m coloane (numerotate de la 1 la m) cu proprietatea că
// fiecare element Aij memorează cea mai mică dintre valorile indicilor i şi j ( 1≤i≤n, 1≤j≤m ).

#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            if (i <= j)
                cout << i << ' ';
            else
                cout << j << ' ';
        cout << '\n';
    }
}