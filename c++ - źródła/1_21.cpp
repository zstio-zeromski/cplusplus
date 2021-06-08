/*pole bitowe - to specjalny typ sk³adnika klasy, przechowuj¹cy informacjê na okreœlonej liczbie bitów. Pole bitowe mo¿e miec jakikolwiekt typ ca³kowity: char, short, int, long w obu wariantach signed lub unsigned*/

#include <iostream>

using namespace std;
class port{
      public:
      unsigned odczyt: 1; //liczba bitów
      };
int main()
{
    port p1;
    p1.odczyt = 2;
    cout<<p1.odczyt<<endl;//0
    p1.odczyt = 1;
    cout<<p1.odczyt<<endl;//1
    p1.odczyt = 3;
    cout<<p1.odczyt<<endl;//1
    p1.odczyt = 4;
    cout<<p1.odczyt<<endl;//0 
    system("PAUSE");
    return 0;
}
