#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
class a
{
      public:
             int b,c,d;
};
ostream& operator<<(ostream &str, a a10)
{
          str << a10.b << " " << a10.c << " " <<a10.d <<" \n";
          return str;         
}
int main()
{   
          a a1, a2;
          a1.b=10;
          a1.c=11;
          a1.d=12;
          ofstream ofs;
          ofs.open("plik.tmp",ios_base::binary);
          ofs << "¿Ÿæñ³œ¹êó";
          ofs << a1;
          ofs.close();
          system("PAUSE");
          return 0;
}
