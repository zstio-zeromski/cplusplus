#include <iostream>
#include <cstdlib>

using namespace std;

class wektor
{
      public:
             float x, y, z;
};
ostream& operator<<(ostream& strumien_wyj, wektor w)
{
         strumien_wyj << w.x << " " << w.y << " " << w.z;
         return strumien_wyj;         
}
istream& operator>>(istream& strumien_wej, wektor& w)
{
         strumien_wej >> w.x >> w.y >> w.z;
         return strumien_wej;        
}
int main()
{
    wektor a,b;
    
    cout << "Podaj wsp�rz�dne wektora a: ";
    cin >> a;
    cout << "Podaj wsp�rz�dne wektora b: ";
    cin >> b;
    
    cout << "Wektor a ma wsp�rz�dne : [ " << a << " ] \n"; 
    cout << "Wektor b ma wsp�rz�dne : [ " << b << " ] \n"; 
    
    system("PAUSE");
    return 0;   
}
