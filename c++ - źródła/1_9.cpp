#include <iostream>

using namespace std;

double suma (double c, double d);
void hello();

int main()
{
    double a, b;
    
    hello();
    
    cout<<"Podaj a:"<<endl;
    cin>>a;     
    cout<<"Podaj b:"<<endl;
    cin>>b; 
    
    cout<<"Suma liczb a i b wynosi: "<<suma(a,b)<<endl;
    
    system("PAUSE");
    return 0;
    
}

double suma (double c, double d)
{
       return c+d;
}

void hello()
{
     cout<<"Witam w moim programie"<<endl;
}
