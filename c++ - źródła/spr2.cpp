#include <iostream>
#include <cstdlib>
using namespace std;

class klasaA
{
      public:
                void virtual funkcja()
                {
                     cout<<"A \n";
                }
                void czesc()
                {
                     cout<<"Czesc A \n";
                }
};
class klasaB : public klasaA
{
      public:
             void funkcja()
             {
                  cout<<"B \n";
             } 
             void czesc()
             {
                  cout<<"Czesc B \n";
             }
};

int main()
{   
    klasaB b; 
    klasaA *wsk;
    wsk = &b;
    wsk->funkcja();
    wsk->czesc();
    
    system("PAUSE");
    return 0;   
}
