/* program kopiuj�cy ci�g znak�w z jednego pliku do drugiego*/
#include <iostream>
#include <fstream>

using namespace std;

int main( )
{
    /*zapisywanie do pliku
    ofstream o( "dane.txt" );
    o<<"������";
    o.close();*/
    
    ifstream IStrm( "dane.txt");
    
    ofstream OStrm( "wynik.txt");
    char c;
    while ( !IStrm.eof( )) 
    {
          if( ( IStrm.get(c)).good( ) )
          //IStrm.get(c);//IStrm>>c;-bez pustych znak�w
          OStrm << (char)(64+((c+3)%90))<<" ";
    }
    
    OStrm.close();
    IStrm.close();
    //system("PAUSE");
    return 0;
}
