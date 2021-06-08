#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Podaj a:"<<endl;
    cin>>a;
    
    if(a%2 == 0)
    {
         cout<<"Liczba parzysta"<<endl;
    }
    else
    {
         cout<<"Liczba nieparzysta"<<endl;
    }

    system("PAUSE");
    return 0;
    
}

