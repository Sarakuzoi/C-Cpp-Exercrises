// https://www.pbinfo.ro/probleme/2839/parimpar1

// Se dă un număr natural, n (n∈[2,5000]), și un șir de 2·n numere naturale
// din intervalul [0,5]. Se cere să se determine valoarea obținută
// însumând toate produsele de forma x·y, unde x și y sunt numere de
// paritate diferită, x fiind printre primii n termeni ai șirului dat,
// iar y printre ultimii n termeni ai acestui șir. Dacă nu există niciun
// astfel de produs, valoarea cerută este nulă.

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("parimpar1.in");
ofstream out("parimpar1.out");

int v1[6], v2[6];

int main()
{
    int n, x, s = 0;
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        v1[x]++;
    }
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        v2[x]++;
    }
    for (int i = 0; i <= 5; i++)
        for (int j = 0; j <= 5; j++)
            if (i % 2 != j % 2)
                for (int x = 1; x <= v1[i] * v2[j]; x++)
                    s += i * j;
    out << s;
    return 0;
}