// https://www.pbinfo.ro/probleme/2837/intervale5

// Se dă un șir de cel mult un milion de numere naturale din intervalul [0,102].
// Se cere să se determine toate perechile distincte formate din termeni ai șirului dat,
// x și y (y-x≥2), astfel încât să nu existe niciun termen al șirului care să aparțină
// intervalului (x,y). Dacă nu există nicio astfel de pereche, se afișează mesajul nu exista.

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("intervale5.in");
ofstream out("intervale5.out");

int nr[101];

int main()
{
    int n, x, y;
    while (in >> n)
        nr[n] = 1;

    int prev = -2, cnt = 0, ok = 0;
    for (int i = 0; i <= 100; i++)
        if (nr[i])
        {
            if (cnt && i - prev >= 2)
            {
                out << prev << ' ' << i << endl;
                ok = 1;
            }
            prev = i;
            cnt++;
        }
    if (!ok)
        out << "nu exista";
    return 0;
}
