//zukamy najmniejszej liczby pierwszej dziel�cej dan� liczb� (56). Jest to 2. Dzielimy: 56/2=28. Powtarzamy t� czynno�� dla kolejnych wynik�w a� do uzyskania w ilorazie liczby 1.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int l = 20;
   
   while(l != 1)
   {
           for(int i = 2; i<=l; i++)
           {
              if(l%i == 0)
              {
                     cout<<i<<endl;
                     l = l/i;
                     break;
              }
            }
   }
    system("PAUSE");
    return 0;   
}
