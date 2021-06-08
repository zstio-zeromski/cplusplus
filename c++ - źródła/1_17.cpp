#include <iostream>

using namespace std;

void zamiana (int *a, int *b)
{
     int pom = *a;
     *a = *b;
     *b = pom;
}
int main()
{
    int a = 5;
    int b = 3;
    
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    
    cout<<"Po zamianie mamy \n";
    
    zamiana(&a,&b);
    
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    
    system("PAUSE");
    return 0;
    
}      
            


