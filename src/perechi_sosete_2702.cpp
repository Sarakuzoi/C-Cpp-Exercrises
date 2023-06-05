// https://www.pbinfo.ro/probleme/2702/perechisosete

// Andrei lucrează într-un magazin de șosete, iar fiecare șosetă are
// asociat un numar întreg pentru a o identifica mai ușor din ce model
// face parte. Dându-se un vector neordonat de astfel de coduri, aflați
// câte perechi de șosete se pot forma.

#include <iostream>

using namespace std;

int sos[101];

int main()
{
    int n, x, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        sos[x]++;
    }
    for (int i = 1; i <= 100; i++)
        sum += sos[i] / 2;
    cout << sum;
    return 0;
}
