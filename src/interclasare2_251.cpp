#include <iostream>
#include <fstream>

using namespace std;

ifstream in("interclasare2.in");
ofstream out("interclasare2.out");

int main()
{
    int n, m, a[100001], b[100001], cnt = 0, ai = 1, bi = 1;
    int v[100001], vi = 0;
    in >> n;
    for (int i = 1; i <= n; i++)
        in >> a[i];
    in >> m;
    for (int i = 1; i <= m; i++)
        in >> b[i];
    while (ai <= n && bi <= m)
    {
        if (a[ai] == b[bi])
        {
            vi++;
            v[vi] = a[ai];
        }
        if (a[ai] < b[bi])
            ai++;
        if (a[ai] > b[bi])
            bi++;
    }
    for (int i = 1; i <= vi; i++)
    {
        cnt++;
        out << v[i] << ' ';
        if (cnt == 10)
        {
            out << endl;
            cnt = 0;
        }
    }
    return 0;
}