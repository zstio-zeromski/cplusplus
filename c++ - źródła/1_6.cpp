#include <iostream>

using namespace std;

int main()
{
    int k;
    cout<<"Podaj liczb� ca�kowit�"<<endl;
    cin>>k;
    
    if((k == 2) || (k == 10))
    {   
        cout<<"Liczba jest r�wna 2 lub 10"<<endl;     
    }
    if((k > 2) && (k < 10))
    {
          cout<<"Liczba jest wi�ksza od 2 i mniejsza od 10"<<endl;
    }
    if(k != 2)
    {
         cout<<"Liczba jest r�na od 2"<<endl;
    }
    if(!k)
    {
          cout<<"Liczba jest r�wna zero"<<endl;
    }
     
    system("PAUSE");
    return 0;
    
}

