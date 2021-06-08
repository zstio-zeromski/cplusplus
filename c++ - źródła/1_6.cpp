#include <iostream>

using namespace std;

int main()
{
    int k;
    cout<<"Podaj liczbê ca³kowit¹"<<endl;
    cin>>k;
    
    if((k == 2) || (k == 10))
    {   
        cout<<"Liczba jest równa 2 lub 10"<<endl;     
    }
    if((k > 2) && (k < 10))
    {
          cout<<"Liczba jest wiêksza od 2 i mniejsza od 10"<<endl;
    }
    if(k != 2)
    {
         cout<<"Liczba jest ró¿na od 2"<<endl;
    }
    if(!k)
    {
          cout<<"Liczba jest równa zero"<<endl;
    }
     
    system("PAUSE");
    return 0;
    
}

