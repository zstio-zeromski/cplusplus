#include <iostream>

using namespace std;

int main()
{
    int i;
    
    cout<<"P�tla FOR"<<endl;
    for(i=0; i<11; i++)
    {
            cout<<"\t"<<i<<"\t"<<i*i<<"\t"<<i*i*i<<endl;
    }
    
    cout<<"P�tla WHILE"<<endl;
    i = 0;
    while(i<11)
    {
            cout<<"\t"<<i<<"\t"<<i*i<<"\t"<<i*i*i<<endl;
            i++;
    }   
    
    cout<<"P�tla DO..WHILE"<<endl;
    i = 0;
    do {
          cout<<"\t"<<i<<"\t"<<i*i<<"\t"<<i*i*i<<endl;
          i++;
    }
    while (i<11);      
    
    system("PAUSE");
    return 0;
    
}

