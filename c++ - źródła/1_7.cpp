#include <iostream>

using namespace std;

int main()
{
    int k;
    cout<<"Podaj cyfr�"<<endl;
    cin>>k;
    
    switch(k)
    {
             case 0: cout<<"zero"<<endl;
             break;
             case 1: cout<<"jeden"<<endl;
             break;
             case 2: cout<<"dwa"<<endl;
             break;
             case 3: cout<<"trzy"<<endl;
             break;
             case 4: cout<<"cztery"<<endl;
             break;
             case 5: cout<<"pi��"<<endl;
             break;
             case 6: cout<<"sze��"<<endl;
             break;
             case 7: cout<<"siedem"<<endl;
             break;
             case 8: cout<<"osiem"<<endl;
             break;
             case 9: cout<<"dziewi��"<<endl;
             break;
             default:
                     cout<<"to nie cyfra"<<endl;
                     
    }
    system("PAUSE");
    return 0;
    
}

