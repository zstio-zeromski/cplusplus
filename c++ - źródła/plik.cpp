#include <iostream>
#include <fstream>
using namespace std;
int main()
{   
          ofstream ofs("ksiê¿yc.tmp");
          ofs << "lae";
          ofs.close();
          ifstream osf ("ksiê¿yc.tmp");
          string g;
          osf>>g;
          cout<<g;
          system("PAUSE");
          return 0;
}
