#include <iostream>

using namespace std;

double srednia(int [], int);

int main()
{
    int n=10;
    int tab[n];
    for(int i=0; i<n; ++i)
    {
            cout<<"Podaj ocene\n";
            cin>>tab[i];
    }
    
    cout<<"Œrednia ocen wynosi :"<<srednia(tab,n)<<endl;
    system("PAUSE");
    return 0;
    
}
double srednia(int a[], int m)
{
    double w = 0;
    for(int i = 0; i<m ;i++) w+=a[i];
    return w/m;
}
            
            


