#include <iostream>

using namespace std;

int main()
{
    int *wi;
        
    int k = 3;
    wi = &k;
        
    cout<<"Warto�� zmiennej na kt�r� wskazuje wska�nik "<<*wi<<endl;
    cout<<"Adres zmiennej "<<wi<<endl; 
    
    *wi = 10;
    
    cout<<"Warto�� zmiennej "<<k<<endl; 
    
    int tab[4] = {1,2,3,4};
    wi = tab;//wska�nik wskazuje na pierwszy element tablicy, to samo co: wi = &tab[0]
    cout<<"Elementy tablicy \n";
    for(int i = 0; i<4; ++i)
            cout<<*wi++<<"\t";
    cout<<endl;
    system("PAUSE");
    return 0;
    
}
          
            


