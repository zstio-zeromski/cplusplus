#include <iostream>

using namespace std;

void binarna (int a)
{
    int reszta;
   
    if(a>0)
           binarna(a/2);
    reszta = a % 2;
    cout<<reszta;
}  
int main()
{
    int n;
    cout<<"Program wypisuje binarn¹ postaæ liczby n\n";
    cout<<"Podaj n\n";
    cin>>n;
    
    cout<<"Binarna postaæ liczby "<<n<<" to:\n";
    binarna(n);
    cout<<endl;
    
    system("PAUSE");
    return 0;
    
}


