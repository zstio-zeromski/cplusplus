#include <iostream>

using namespace std;

int main()
{
    double a,b;
    cout<<"Podaj a:"<<endl;
    cin>>a;
    cout<<"Podaj b:"<<endl;
    cin>>b;
    cout<<"Suma wynosi : "<<a+b<<endl;
    cout<<"Ró¿nica wynosi : "<<a-b<<endl;
    cout<<"Iloczyn wynosi : "<<a*b<<endl;
    if(b != 0)
    {
         cout<<"Iloraz wynosi : "<<a/b<<endl;
    }
    else
    {
         cout<<"Nie dziel przez zero"<<endl;
    }

    system("PAUSE");
    return 0;
    
}

