#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout<<"Podaj pierwsz� liczb�:"<<endl;
    cin>>a;
    cout<<"Podaj drug� liczb�:"<<endl;
    cin>>b;
    cout<<"Podaj trzeci� liczb�:"<<endl;
    cin>>c;
    
    int pom;
    
    pom = (a>b)?a:b;
    pom = (pom>c)?pom:c;
    
    cout<<"Najwi�ksz liczba to: "<<pom<<endl;

    system("PAUSE");
    return 0;
    
}

