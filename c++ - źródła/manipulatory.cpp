#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a ;
    cout<< "podaj a"<<endl ;
    cin>> a;
    cout<<setw(6)<<setfill('x');
    cout<<a<<endl; 
    cout<<hex<<a<<endl;
    cout<<oct<<a<<endl;
    
    system ("PAUSE");
    return 0;
}

