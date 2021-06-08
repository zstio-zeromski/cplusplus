#include <iostream>

using namespace std;

int main()
{
    int *w;
    w = new int;
    *w = 10;
    cout<<"Wartoœæ zmiennej dynamicznej :"<<*w<<endl;
    delete w;
    cout<<"Wartoœæ na jak¹ wskazuje wskaŸnik po destrukcji zmiennej dynamicznej :"<<*w<<endl;
    
    
    int *wt;
    wt = new int[10];
    delete []wt;
    
    system("PAUSE");
    return 0;
    
}      
            


