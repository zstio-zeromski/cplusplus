#include <iostream>
#include <fstream>
using namespace std;
int main()
{   
          ofstream ofs("ksi�yc.tmp");
          ofs << "lae";
          ofs.close();
          ifstream osf ("ksi�yc.tmp");
          string g;
          osf>>g;
          cout<<g;
          system("PAUSE");
          return 0;
}
