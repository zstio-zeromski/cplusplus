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
    
    cout << "Podaj wspó³rzêdne wektora a: ";
    cin >> a;
    cout << "Podaj wspó³rzêdne wektora b: ";
    cin >> b;
    
    cout << "Wektor a ma wspó³rzêdne : [ " << a << " ] \n"; 
    cout << "Wektor b ma wspó³rzêdne : [ " << b << " ] \n"; 
    
    system("PAUSE");
    return 0;   
}
