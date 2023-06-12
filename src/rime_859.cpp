// https://www.pbinfo.ro/probleme/859/rime

// Se dă o mulțime cu n cuvinte distincte. Să se împartă în submulțimi de
// cuvinte cu proprietatea că oricare două cuvinte din aceeași submulțime
// rimează și oricare două cuvinte care rimează sunt în aceeași submulțime.

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream in("rime.in");
ofstream out("rime.out");

int main()
{
    int n;
    char s[10001], aux[501][10001];

    in >> n;
    while (in.getline(s, 10001))
    {
        char *cuvant = strtok(s, " ,;\n");
        while (cuvant != NULL)
        {
            char term[21] = "";
            for (int i = strlen(cuvant) - 2; i >= 0; i--)
                if (strchr("AEIOUaeiou", cuvant[i]))
                    strcpy(term, cuvant + i);
            out << term << endl;
            cuvant = strtok(NULL, " ,;\n");
        }
    }
}