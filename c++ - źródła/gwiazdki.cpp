#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int y=5;//ilosc linijek
    int i,j;//zmienne petli;
    
    /*      *
           ** 
          ***
         ****
    */  
    for(i=y; i>0; i--)
    {
       for(j=0; j<i; j++) cout<<" ";
       for(j=0; j<y-i+1; j++) cout<<"*";
    cout<<"\n";
    } 
    /*---------------------------------------------------------------------*/
    /*   ****
          *** 
           **
            *
    */ 
    cout<<endl; 
    for(i=1; i<=y; i++)
    {
       for(j=0; j<i; j++) cout<<" ";
       for(j=0; j<y-i+1; j++) cout<<"*";
    cout<<"\n";
    }  
    system("PAUSE");
    return 0;
}
