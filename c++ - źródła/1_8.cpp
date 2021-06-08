#include <iostream>

using namespace std;

int main()
{
    int i;
    
    cout<<"Pêtla FOR"<<endl;
    for(i=0; i<11; i++)
    {
            cout<<"\t"<<i<<"\t"<<i*i<<"\t"<<i*i*i<<endl;
    }
    
    cout<<"Pêtla WHILE"<<endl;
    i = 0;
    while(i<11)
    {
            cout<<"\t"<<i<<"\t"<<i*i<<"\t"<<i*i*i<<endl;
            i++;
    }   
    
    cout<<"Pêtla DO..WHILE"<<endl;
    i = 0;
    do {
          cout<<"\t"<<i<<"\t"<<i*i<<"\t"<<i*i*i<<endl;
          i++;
    }
    while (i<11);      
    
    system("PAUSE");
    return 0;
    
}

