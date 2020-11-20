// L04.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
using namespace std;

#define Zadanie4A
#ifdef Zadanie4A

int main()
{
    char t[100],y[100],tekst[100];
    cout << "Wpisz tekst -> ";
    fgets(tekst, 100, stdin);
    int dlugosc = strlen(tekst) - 1;
    if (tekst[dlugosc] == '\n')
        tekst[dlugosc] = 0;
    
    for (int z = 0; z < dlugosc; z++)
    {
        t[z] = tekst[z];
        for (int w = dlugosc; w >= 0; w--)
        {
            if ((int)t[z] >= 65 && (int)t[z] <= 90)
                y[w] = (int)(t[z] + 32);
            else if ((int)t[z] >= 97 && (int)t[z] <= 122)
                y[w] = (int)(t[z] - 32);
            else
                y[w] = t[z];
        }
    }
    y[dlugosc] = '\0';
    cout << endl;
   cout << y;
    
}

#endif // Zadanie4A


  
