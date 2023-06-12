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
    char s[10001], aux[501][10001], sir[10001];

    in >> n;
    while (in.getline(s, 10001))
    {
        char *cuvant = strtok(s, " ,;\n");
        while (cuvant != NULL)
        {
            strcat(sir, cuvant);
            strcat(sir, " ");
            cuvant = strtok(NULL, " ,;\n");
            // char list_term[21] = "";
            // for (int i = strlen(cuvant) - 2; i >= 0; i--)
            //     if (strchr("AEIOUaeiou", cuvant[i]))
            //     {
            //         strcpy(list_term, cuvant + i);
            //         break;
            //     }
            // out << list_term << endl;
            // cuvant = strtok(NULL, " ,;\n");
        }
    }

    char *cuv = strtok(sir, " ");
    char list_term[505][25];
    int cnt = 1;
    while (cuv != NULL)
    {
        for (int i = strlen(cuv) - 2; i >= 0; i--)
            if (strchr("AEIOUaeiou", cuv[i]))
            {
                int ok = 1;
                for (int i = 1; i <= n; i++)
                {
                    if (strcmp(cuv + i, list_term[i]) == 0)
                        ok = 0;
                }
                if (ok)
                    strcpy(list_term[cnt], cuv + i);
                cnt++;
                break;
            }
    }
}