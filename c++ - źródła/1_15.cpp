#include <iostream>

using namespace std;

void wypisz(int tab [][5]);
int main()
{
    int tab[5][5];
    cout<<"Tablica dwuwymiarowa 5 x 5\n";
    for(int i=0; i<5; ++i)
    {
            for(int j=0; j<5; ++j)
            {
                    tab[i][j]=i+j;
                    cout<<tab[i][j]<<"\t";
                    if(j==4) cout<<"\n";
            }
    }
    cout<<endl;
    wypisz(tab);
    cout<<endl;
    system("PAUSE");
    return 0;
    
}
 
void wypisz(int tab [][5])
{
     cout<<"Elementy tablicy o jednakowych indeksach\n";
     for (int i = 0; i<5; i++)
         cout<<tab[i][i]<<"\t";
     cout<<endl;
}         
            


