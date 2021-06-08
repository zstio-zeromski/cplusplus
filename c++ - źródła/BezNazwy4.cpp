#include <iostream>
using namespace std;

int main()
{
    int n=0;
    bool tab[n];
    for (int i=0;i<n;i++)
    {
        tab[i]=0;
    }
    
    
    for (int i=2;i*i<=n;i++)
    {
        for (int j=i+i;j<=n;j=j+i)
        {
          tab[j]=true;  
        }
    }
    for (int i=2;i<=n;i++)
    {
        if (tab[i]==false) cout << i << "\n";
    }
    cout << sizeof(int);
    system("PAUSE");
    return 0;
}
