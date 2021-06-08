#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
class a
{
      
      public:
             int i;
             char c;
};
int main()
{   
          a *a1;
          ofstream ofs;
          fstream fs;
          
          ofs.open("plik.tmp", ios::binary);
          ofs << "¿Ÿæñ³œ¹êó";
          ofs <<10;
          ofs.seekp(10);
          ofs<<11;
          a1->i=10;
          a1->c='a';
          ofs<<a1->i<<a1->c;
          ofs.close();
          system("PAUSE");
          return 0;
}
