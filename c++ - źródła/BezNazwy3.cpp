#include <iostream>
using namespace std;

int main ()
{
    int a,b;
    cout << "Podaj a i b\n";
    cin >> a;
    cout << "\n";
    cin >> b;
    for (;a!=b;)
    {
        if  (a>b) {
            a=a-b;
        }
        else {
             b=b-a;
             }
             }
             cout << b;
             system("PAUSE");
             return 0;
        
}
