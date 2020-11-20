// L04.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
using namespace std;

#define Zadanie4B

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
        
        for (int w = dlugosc; w >= 0; w--)
        {
            if ((int)tekst[z] >= 65 && (int)tekst[z] <= 90)
                y[w] = (int)(tekst[z] + 32);
            else if ((int)tekst[z] >= 97 && (int)tekst[z] <= 122)
                y[w] = (int)(tekst[z] - 32);
            else
                y[w] = tekst[z];
        }
    }
    
   cout << endl;
   cout << y;
    
}

#endif // Zadanie4A
#ifdef Zadanie4B
int main()
{
    constexpr int n = 5;
    int tab[n][n];
    int k = 25, w=0 ,l;
    l = n;
    while (k != 0)
    {
        
    }
    
}
#endif // Zadanie4B



  
