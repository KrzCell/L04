// L04.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
using namespace std;

#define Zadanie4C

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
    int k = 25, w=0 ,l,i;
    l = n;
    while (k != 0)
    {
        for (i = w; i < l; i++)
        {
            tab[w][i] = k--;
        }
        for (i = w + 1; i < l; i++)
        {
            tab[i][l - 1] = k--;
        }
        for (i = l - 2; i >= w; i--)
        {
            tab[l - 1][i] = k--;
        }
        for (i = l - 2; i > w; i--)
        {
            tab[i][w] = k--;
        }
        w++;
        l--;
        
    }
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << tab[j][i] << "\t";
        }
        cout << endl;
    }
    
}
#endif // Zadanie4B

#ifdef Zadanie4C
int main()
{
    int tab[5][5];
    int i, j, sw, sk;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout << "Dla i = " << i << " j = " << j << " Podaj wartosc -> ";
            cin >> tab[i][j];
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cout << tab[i][j] << "  ";
        }
        if (i == (j-1))
            cout << endl;
    }

    for (i = 0; i < 5; i++)
        sw += tab[i][j];

    for (i = 0; i < 5; i++)
        sk += tab[i][j];


}
#endif // Zadanie4C




  
