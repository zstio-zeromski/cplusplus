#include <iostream>
using namespace std;

int main()
{
    int r = 5;
    
    int tab[5] = {5, 4, 3, 2, 1};
    cout<<"Sortowanie b¹belkowe: \t";
    for(int i = 0; i<r; ++i)
    {
            cout<<tab[i]<<"\t";
    }
    
     cout<<endl<<endl;
    //sortowanie b¹belkowe
    for(int i=0;i<r-1; ++i)
    {
            for(int j=0;j<r-i-1; ++j)
            {
                           if(tab[j]>tab[j+1]) swap(tab[j],tab[j+1]);
            }
            cout<<"krok "<<i+1<<" :";
            for(int i = 0; i<r; ++i)
            {
            cout<<tab[i]<<"\t";
            }
    cout<<endl;
            
    }
    //koniec b¹belkowego
   
    //sortowanie przez wybór
     cout<<endl;
    tab[0] = 4;
    tab[1] = 7;
    tab[2] = 2;
    tab[3] = 9;
    tab[4] = 3; 
    cout<<"Sortowanie przez wybór: \t";
    for(int i = 0; i<r; ++i)
    {
            cout<<tab[i]<<"\t";
    }
    cout<<endl<<endl;
    int pmin;
     for(int i=0;i<r-1; ++i)
    {
             pmin = i;
            for(int j=i+1;j<r; ++j)
            {
                           if(tab[j]<tab[pmin]) pmin = j;
            }
            swap(tab[pmin],tab[i]);
            cout<<"krok "<<i+1<<" :";
            for(int i = 0; i<r; ++i)
            {
            cout<<tab[i]<<"\t";
            }
    cout<<endl;
            
    } 
    //koniec przez wstawianie
    
    
    //sortowanie przez wstawianie
    cout<<endl;
    tab[0] = 7;
    tab[1] = 3;
    tab[2] = 8;
    tab[3] = 5;
    tab[4] = 2; 
    cout<<"Sortowanie przez wstawienie: \t";
    for(int i = 0; i<r; ++i)
    {
            cout<<tab[i]<<"\t";
    }
    cout<<endl<<endl;
    int i,x,k=1;
      for(int j = r - 2; j >= 0; j--)
      {
            x = tab[j];
            i = j + 1;
            while((i < r) && (x > tab[i]))
            {
                     tab[i - 1] = tab[i];
                     i++;
            }
            tab[i - 1] = x;
            
            cout<<"krok "<<k++<<" :";
            for(int i = 0; i<r; ++i)
            {
            cout<<tab[i]<<"\t";
            }
            cout<<endl;
      }
    
    //koniec sortowania przez wstawienie
    
    cout<<endl;

    system("PAUSE");
    return 0;
}
