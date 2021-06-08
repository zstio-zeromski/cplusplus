#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Podajpierwsza liczbe:";
    cin>>a;
    cout<<"Podajdruga liczbe:";
    cin>>b;

    c=a*b;
    do
    {
        if(a>b) {
           a=a-b;
        } else {
            b=b-a;
        }
    }
    while(a!=b);

    cout<<"NWW="<<c/a<<endl;
return 0;
}
