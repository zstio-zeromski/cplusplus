#include <iostream>

using namespace std;

int main()
{
    int *w;
    w = new int;
    *w = 10;
    cout<<"Warto�� zmiennej dynamicznej :"<<*w<<endl;
    delete w;
    cout<<"Warto�� na jak� wskazuje wska�nik po destrukcji zmiennej dynamicznej :"<<*w<<endl;
    
    
    int *wt;
    wt = new int[10];
    delete []wt;
    
    system("PAUSE");
    return 0;
    
}      
            


