// // https://www.pbinfo.ro/probleme/3080/verifnumar

// // Se dă un șir de caractere. Sa se determine numărul scris cu cifrele existente în șirul dat.
// // Să se afișeze numărul obținut și, pe linia următoare, toate caracterele din șir care nu fac parte din număr, cu excepția spațiilor.
#include <iostream>
#include <cstring>

using namespace std;

bool contains_digits(char s[])
{
    for (int i = 0; i < strlen(s); i++)
        if ('0' <= s[i] && s[i] <= '9')
            return true;
    return false;
}

bool contains_only_zeros(char s[])
{
    bool ok = false;
    for (int i = 0; i < strlen(s); i++)
    {
        if ('1' <= s[i] && s[i] <= '9')
            return false;
        if (s[i] == '0')
            ok = true;
    }
    return ok;
}

int main()
{
    char s[101], nr[101] = "", lit[101] = "";
    int n = 0, l = 0;
    cin.getline(s, 101);
    if (!contains_digits(s))
    {
        cout << "NaN";
        return 0;
    }
    if (contains_only_zeros(s))
    {
        int poz_fin_zero;
        for (int i = 0; i < strlen(s); i++)
            if (s[i] == '0')
                poz_fin_zero = i;
        cout << '0' << '\n';
        for (int i = 0; i < strlen(s); i++)
            if (i != poz_fin_zero && s[i] != ' ')
                cout << s[i] << ' ';
        return 0;
    }
    else
    {
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] == '0')
            {
                if (n > 0)
                {
                    nr[n] = s[i];
                    n++;
                    nr[n] = '\0';
                }
                else
                {
                    lit[l] = s[i];
                    l++;
                    lit[l] = '\0';
                }
            }
            else if ('1' <= s[i] && s[i] <= '9')
            {
                nr[n] = s[i];
                n++;
                nr[n] = '\0';
            }
            else if ('a' <= s[i] && s[i] <= 'z')
            {
                lit[l] = s[i];
                l++;
                lit[l] = '\0';
            }
        }
    }
    if (l == 0)
        cout << "CORECT";
    else
    {
        cout << nr << endl;
        for (int i = 0; i < l; i++)
            cout << lit[i] << ' ';
    }
    return 0;
}