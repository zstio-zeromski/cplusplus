#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
    char plik_a[80];
    char plik_b[80];
    
    cout<<"Podaj nazwê pliku wejœciowego: \n";
    cin>>plik_a;
    ifstream ifs(plik_a);//utworzy nowy plik
    if(!ifs.is_open())
    {
             cout << "Nie moge otworzyc takiego pliku ";
             return 1;          
    }
    cout<<"Podaj nazwê pliku wyjœciowego: \n";
    cin>>plik_b;
    ofstream ofs(plik_b);//utworzy nowy plik//ofs(plik_b);
    if(!ofs.is_open())
    {
             cout << "Nie moge otworzyc takiego pliku ";
             return 1;          
    }
    //--------------akcja przypisania--------------------
    char c;
    while(ifs.get(c))
    {
             if(!ofs.put(c))
             {
                             cout<<"B³¹d pisania ! \n";
                             break;
             }
    }
    //-------------koniec, spr powodów zakonczenia---------------
    if(!ifs.eof()) cout<<"B³¹d czytania";
    
    system("PAUSE");
    return 0;   
}
