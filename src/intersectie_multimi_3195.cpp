// https://www.pbinfo.ro/probleme/3195/intersectie-multimi

// Se dă o mulţime nevidă A cu n elemente numere reale.
// Să se afișeze elementele mulțimilor A ∩ N, A ∩ Z, A ∩ Q și A ∩ (R-Q).
// Numerele raţionale pot fi periodice sau neperiodice.
// Pentru numerele iraţionale sunt date numai primele zecimale (maxim 5), urmate de 3 puncte.
#include <iostream>
#include <cstring>

using namespace std;

void my_strcat(char sir1[], char sir2[])
{
    strcat(sir1, sir2);
    strcat(sir1, " ");
}

int main()
{
    int nr;
    char s[451], n[451], z[451], q[451], ir[451];
    cin >> nr;
    cin.getline(s, 451);
    cin.getline(s, 451);
    char *cuvant = strtok(s, " ");
    while (cuvant != NULL)
    {
        if (!strchr(cuvant, '.') && cuvant[0] != '-')
        {
            my_strcat(n, cuvant);
            my_strcat(q, cuvant);
            my_strcat(z, cuvant);
        }
        if (!strchr(cuvant, '.') && cuvant[0] == '-')
        {
            my_strcat(q, cuvant);
            my_strcat(z, cuvant);
        }
        if (cuvant[strlen(cuvant) - 1] == '.')
            my_strcat(ir, cuvant);
        if (cuvant[strlen(cuvant) - 1] == ')' || (strchr(cuvant, '.') && cuvant[strlen(cuvant) - 1] != '.'))
            my_strcat(q, cuvant);
        cuvant = strtok(NULL, " ");
    }
    strlen(n) == 0 ? cout << "Multime vida\n" : cout << n << '\n';
    strlen(z) == 0 ? cout << "Multime vida\n" : cout << z << '\n';
    strlen(q) == 0 ? cout << "Multime vida\n" : cout << q << '\n';
    strlen(ir) == 0 ? cout << "Multime vida\n" : cout << ir << '\n';
}
