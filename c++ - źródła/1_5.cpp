#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout<<"Podaj pierwsz¹ liczbê:"<<endl;
    cin>>a;
    cout<<"Podaj drug¹ liczbê:"<<endl;
    cin>>b;
    cout<<"Podaj trzeci¹ liczbê:"<<endl;
    cin>>c;
    
    int pom;
    
    pom = (a>b)?a:b;
    pom = (pom>c)?pom:c;
    
    cout<<"Najwiêksz liczba to: "<<pom<<endl;

    system("PAUSE");
    return 0;
    
}

