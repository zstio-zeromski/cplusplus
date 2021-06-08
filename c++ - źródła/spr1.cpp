#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
class punkt {
      public:
             float x,y;
      protected:
                float pro;
      public:      
             void wypisz();   
};
void punkt::wypisz()
{
     cout<<x<<" "<<y<<"\n";    
}

class lepszy_punkt : public punkt {
      public:
             void wypisz();
};
void lepszy_punkt::wypisz()
{
    cout<<x<<" "<<y<<"\n";
}
int main()
{
    punkt p;
    lepszy_punkt lp1;
    lp1.wypisz();
    lp1.pro=10; 
    system("PAUSE");
    return 0;   
}
