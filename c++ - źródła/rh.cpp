#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int w,n,i;
    w=1;
    n=3;
    for (w=1,i=1;i<=n;i++)
    w=w*i;
    cout<<"Silnia: "<<w;
    getch ();
    return 0;
}
