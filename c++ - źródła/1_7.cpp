#include <iostream>

using namespace std;

int main()
{
    int k;
    cout<<"Podaj cyfrê"<<endl;
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
             case 5: cout<<"piêæ"<<endl;
             break;
             case 6: cout<<"szeœæ"<<endl;
             break;
             case 7: cout<<"siedem"<<endl;
             break;
             case 8: cout<<"osiem"<<endl;
             break;
             case 9: cout<<"dziewiêæ"<<endl;
             break;
             default:
                     cout<<"to nie cyfra"<<endl;
                     
    }
    system("PAUSE");
    return 0;
    
}

