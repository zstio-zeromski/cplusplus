#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
    char tekst[] = {"Zobaczymy teraz program, który\n"
    "nadpisuje fragment pliku odpowiednim\n"
    "tekstem\n"};
    ofstream fs("tekst.tmp");
    if(!fs)
    {
             cout << "Nie moge otworzyc takiego pliku ";
             //return 1;          
    }
    fs<<tekst;
    
    fs.seekp(31);
    fs<<"ABCD";//pisze na 31 polu
    fs.seekp(-6, ios::end);
    fs<<"X"; 
    system("PAUSE");
    return 0;   
}
