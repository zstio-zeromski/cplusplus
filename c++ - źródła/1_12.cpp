#include <iostream>

using namespace std;

int fibo (int a)
{
    if (a == 0) return 0;
    if (a == 1) return 1;
    if (a >= 2) return fibo(a-1)+fibo(a-2);
}  
int main()
{
    int n;
    cout<<"Program wypisuje n - ty element ci¹gu Fibonacciego\n";
    cout<<"Podaj n\n";
    cin>>n;
    
    cout<<n<<" - ty element ci¹gu Fibonacciego to: "<<fibo(n)<<endl;
    
    system("PAUSE");
    return 0;
    
}



