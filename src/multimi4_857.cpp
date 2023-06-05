// https://www.pbinfo.ro/probleme/857/multimi4

// Gigel învaţă la matematică despre mulţimi. A scris pe foaie o mulţime
// formată din litere mari şi mici ale alfabetului englez, considerate
// identice. A separat elementele cu virgule (,) şi a delimitat mulţimea
// cu acolade. Din păcate, în mulţimea scrisă de Gigel se pot repeta
// litere, sau pot să apară şi litera mare şi litera mică. Gigel vă roagă
// să-l ajutaţi să corecteze acea mulţime, adică:

// să eliminaţi dublurile;
// să ordonaţi alfabetic elementele;
// dacă cel puţin jumătate dintre elementele iniţiale sunt litere mari,
// să transformaţi toate elementele în litere mari; în caz contrar
// să transformaţi toate elementele în litere mici.

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[770];
    cin.getline(s, 770);

    int lit_mari = 0, lit_mici = 0;
    for (int i = 1; i < strlen(s); i++)
        if (!strchr(" ,{}", s[i]))
        {
            if (s[i] > 'Z')
                lit_mici++;
            else
                lit_mari++;
        }
    int shift = 'a' - 'A';
    if (lit_mari >= lit_mici)
    {
        for (int i = 1; i < strlen(s); i++)
            if (!strchr(" ,{}", s[i]) && s[i] > 'Z')
                s[i] = s[i] - shift;
    }
    else
    {
        for (int i = 1; i < strlen(s); i++)
            if (!strchr(" ,{}", s[i]) && s[i] <= 'Z')
                s[i] = s[i] + shift;
    }

    int alphabet[27] = {0};
    if (lit_mari >= lit_mici)
    {
        for (int i = 1; i < strlen(s); i++)
            if (!strchr(" ,{}", s[i]))
            {
                alphabet[s[i] - 'A']++;
            }
    }
    else
    {
        for (int i = 1; i < strlen(s); i++)
            if (!strchr(" ,{}", s[i]))
            {
                alphabet[s[i] - 'a']++;
            }
    }

    int last_letter = 0;
    for (int i = 0; i < 27; i++)
        if (alphabet[i])
            last_letter = i;

    cout << '{';
    for (int i = 0; i < 27; i++)
        if (alphabet[i])
        {
            char output_char;
            output_char = (lit_mari >= lit_mici ? 'A' + i : 'a' + i);
            cout << output_char;
            if (i != last_letter)
                cout << ',';
        }
    cout << '}';
    return 0;
}