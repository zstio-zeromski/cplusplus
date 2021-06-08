#include <iostream>
using namespace std;

int funkcja(int n)

{
if (n==0) return 0;
if (n==1) return 1;

return funkcja(n-1)+funkcja(n-2);  
    
}

int main()
{
    for (int i=0;i<65536;i++)
    {
        
cout << funkcja(i); 
}   
    system("PAUSE");
    return 0;
}
