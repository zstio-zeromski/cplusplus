/* program kopiuj¹cy ci¹g znaków z jednego pliku do drugiego*/
#include <iostream>
#include <fstream>

using namespace std;

int main( )
{
    /*zapisywanie do pliku
    ofstream o( "dane.txt" );
    o<<"¹êœæŸó³ñê";
    o.close();*/
    
    ifstream IStrm( "dane.txt");
    
    ofstream OStrm( "wynik.txt");
    char c;
    while ( !IStrm.eof( )) 
    {
          if( ( IStrm.get(c)).good( ) )
          //IStrm.get(c);//IStrm>>c;-bez pustych znaków
          OStrm << (char)(64+((c+3)%90))<<" ";
    }
    
    OStrm.close();
    IStrm.close();
    //system("PAUSE");
    return 0;
}
