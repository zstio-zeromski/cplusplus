#include <iostream>

using namespace std;

int nwd(int a,int b)
{
if (b==0) return a;
else{
int pom=b;
b=a%b;
a=pom;

return nwd(a,b);}

}


int main()
{
    
    int c,d;
    cout << "pod\n";
    cin >> c;
    cout << "\n podaj 2\n";
    cin >> d;
    cout << nwd(c,d);
    system("PAUSE");
    return 0;
    
}
