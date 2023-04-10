// https://www.pbinfo.ro/probleme/975/cuvinte2

// Se dă o propoziție formată din litere mici ale alfabetului englez, spații și semnele de punctuație ,..
// Determinați un cuvânt palindrom din propoziție, primul în ordine alfabetică.
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[256], aux[11] = "", pal[11] = "zzzzzzzzzz";
    int j = 0;
    bool ok = false;
    cin.getline(s, 256);
    char *cuvant = strtok(s, " .,");
    while (cuvant != NULL)
    {
        for (int i = strlen(cuvant) - 1; i >= 0; i--)
        {
            aux[j] = cuvant[i];
            j++;
        }
        aux[j] = '\0';
        if (!strcmp(aux, cuvant) && strcmp(pal, cuvant) > 0)
        {
            strcpy(pal, cuvant);
            ok = true;
        }
        j = 0;
        strcpy(aux, "");
        cuvant = strtok(NULL, " .,");
    }
    ok ? cout << pal : cout << "IMPOSIBIL";
}