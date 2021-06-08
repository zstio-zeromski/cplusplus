#include <cstdlib>
#include <iostream>

using namespace std;

class a{
      public:
      int wa;
      int wb;
      friend a operator+(a a1, a a2);
      static int ala;
      class b{
            string nazwa;
            };
};
a operator+(a a1,a a2)
{
a a3;
            a3.wa=a1.wa+a2.wa;
            a3.wb=a1.wb+a2.wb; 
            return a3;         
}
static int ala=10;
int main(int argc, char *argv[])
{
    a::b j1;
    a i1,i2,i3;
    i1.wa=10;
    i1.wb=11;
    i2.wa=0;
    i2.wb=0;
    i3=i1+i2;
    cout<<i3.wa<<i3.wb;
    
    //cout<<ala;
    system("PAUSE");
    return EXIT_SUCCESS;
}
