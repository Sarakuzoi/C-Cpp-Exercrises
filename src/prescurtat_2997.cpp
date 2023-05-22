// https://www.pbinfo.ro/probleme/2997/prescurtat

// Scrieți funcția cu următorul antet:

// void Prescurtat(char s[])
// Funcția primește ca parametru un text de cel mult 50 de caractere,
// alcătuit din cuvinte separate prin câte un spațiu și formate din
// litere mari ale alfabetului englez, urmate eventual de caracterul .
// (punct), dacă sunt scrise prescurtat. Textul reprezintă numele unei
// instituții de învățământ și doar cuvintele din mulțimea
// {COLEGIUL, LICEUL, NATIONAL, TEORETIC} pot fi prescurtate,
// eliminându-se ultimele lor litere. Funcția va returna tot prin
// intermediul parametrului s numele instituției scris fără prescurtări.

#include <iostream>
#include <cstring>

using namespace std;

void prescurtat(char s[])
{
    char aux[101] = "";
    int pres = 0;

    char *cuvant = strtok(s, " ");

    while (cuvant != NULL)
    {
        pres = (cuvant[strlen(cuvant) - 1] == '.');
        if (!pres)
        {
            strcat(aux, cuvant);
        }
        else
        {
            switch (cuvant[0])
            {
            case 'C':
                strcat(aux, "COLEGIUL");
                break;
            case 'L':
                strcat(aux, "LICEUL");
                break;
            case 'N':
                strcat(aux, "NATIONAL");
                break;
            case 'T':
                strcat(aux, "TEORETIC");
                break;
            }
        }
        strcat(aux, " ");
        cuvant = strtok(NULL, " ");
    }

    aux[strlen(aux) - 1] = '\0';
    strcpy(s, aux);
}

int main()
{
    char s[101];
    cin.getline(s, 101);
    prescurtat(s);
    cout << s;
}
