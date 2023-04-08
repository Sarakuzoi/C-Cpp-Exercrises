// https://www.pbinfo.ro/probleme/3080/verifnumar

// Se dă un șir de caractere. Sa se determine numărul scris cu cifrele existente în șirul dat.
// Să se afișeze numărul obținut și, pe linia următoare, toate caracterele din șir care nu fac parte din număr, cu excepția spațiilor.
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[101], cif[101], lit[101];
    strcpy(cif, "");
    int ind_cif = 0, ind_lit = 0;
    bool nan = true, zero = true, litere = true, natural = true;
    cin.getline(s, 101);
    for (int i = 0; i < strlen(s); i++)
        if (!strlen(cif))
        {
            if (strchr("123456789", s[i]))
            {
                cif[ind_cif] = s[i];
                ind_cif++;
                nan = false;
                zero = false;
            }
            else
            {
                lit[ind_lit] = s[i];
                ind_lit++;
                litere = false;
                if (s[i] == 0)
                    natural = false;
            }
        }
        else
        {
            if (strchr("0123456789", s[i]))
            {
                cif[ind_cif] = s[i];
                ind_cif++;
                nan = false;
                if (s[i] != 0)
                    zero = false;
            }
            else
            {
                lit[ind_lit] = s[i];
                ind_lit++;
                litere = false;
            }
        }
    if (zero)
        strcpy(cif, "0");
    if (litere && natural)
        cout << "CORECT";
    else if (nan)
        cout << "NaN";
    else
    {
        cout << cif << '\n';
        for (int i = 0; i < strlen(lit); i++)
            if (lit[i] == ' ')
                continue;
            else
                cout << lit[i] << ' ';
    }
}