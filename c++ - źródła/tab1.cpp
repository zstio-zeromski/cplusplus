#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char a [] = "ala";
    char b [] = {"ala"};
    char c [] = {'a','l','a'};
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(c)<<endl; 
    if(a[3] == '\0')
    cout<<a[3]<<"ala"<<endl;
    
    system("PAUSE");
    return 0;
       
}
