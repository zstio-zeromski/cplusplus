#include <iostream>
#include <cstdlib>

using namespace std;

void wypisz(int tab [][5])
{
     cout<<"Elementy tablicy o jednakowych indeksach\n";
     for (int i = 0; i<5; i++)
         cout<<tab[i][i]<<"\t";
     cout<<endl;
}

int main()
{
    srand(12);
    int tab[5][5];
    cout<<"Tablica dwuwymiarowa 5 x 5\n";
    for(int i=0; i<5; ++i)
    {
            for(int j=0; j<5; ++j)
            {
                    tab[i][j]=rand();
            }
    }
    cout<<endl;
    wypisz(tab);
    cout<<endl;
    system("PAUSE");
    return 0;
    
}
          
            


