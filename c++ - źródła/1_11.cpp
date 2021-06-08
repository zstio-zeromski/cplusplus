#include <iostream>

using namespace std;
void zamiana (int&, int&);
void zamiana1(int , int);
int main()
{
    int a = 5;
    int b = 3;
    
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    
    zamiana(a,b);
    cout<<"Po zamianie mamy \n";
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    
    a=5;
    b=3;
    zamiana1(a,b);
    cout<<"Po zamianie mamy \n";
    
    
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    
    system("PAUSE");
    return 0;
    
}

void zamiana (int &a, int &b)
{
     int pom = a;
     a = b;
     b = pom;
}
void zamiana1 (int a, int b)
{
     int pom = a;
     a = b;
     b = pom;
}



