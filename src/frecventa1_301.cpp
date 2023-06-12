// https://www.pbinfo.ro/probleme/301/frecventa1

// Se dau n numere naturale cu cel mult două cifre
// fiecare. Afişaţi valorile distincte în ordinea
// descrescătoare a numărului de apariţii.

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("frecventa1.in");
ofstream out("frecventa1.out");

struct element
{
    int val;
    int frecv;
};

void my_sort(element v[])
{
    for (int i = 0; i <= 98; i++)
        for (int j = i + 1; j <= 99; j++)
            if (v[i].frecv < v[j].frecv)
            {
                element aux;
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
            else if (v[i].frecv == v[j].frecv && v[i].val > v[j].val)
            {
                element aux;
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
}

int main()
{
    element v[100];
    for (int i = 0; i <= 99; i++)
    {
        v[i].val = i;
        v[i].frecv = 0;
    }

    int n, x;
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        v[x].frecv++;
    }

    my_sort(v);

    for (int i = 0; i <= 99; i++)
        if (v[i].frecv != 0)
            out << v[i].val << ' ';
    return 0;
}
