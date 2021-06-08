#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    //do {i--;cout<<i<<endl;} while(1);
    //for(;;) {i--; cout<<i<<endl;}
    char znak[8] = "abcdefg";
    if(znak[1] == *(znak+1)=='b')
    cout<<"tak";
    else
    cout<<"nie";
    int a = 2;
    switch(a)
    {
    case 1: a++;
    case 2: a++;
    case 3: a++;
    break;
    case 4: a++;
    default: a++;
    break;
    }
    cout <<a;
    
    a = -2;
    int b = 0;
	if(a<0)
	if(b++>2)
a = 5;
else {a = 0; b ++;}

cout<<endl<<a<<b;

    system("PAUSE");
    return 0;
}
