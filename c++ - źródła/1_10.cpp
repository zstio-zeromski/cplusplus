#include <iostream>

using namespace std;

double potega (double , int = 2);

int main()
{
    double x;
    int n;
    
    cout<<"Program licz�cy warto�� x do pot�gi n"<<endl<<endl; 
    
    cout<<"Podaj x: (liczba rzeczywista)"<<endl;
    cin>>x;     
    cout<<"Podaj n: (liczba ca�kowita)"<<endl;
    cin>>n; 
    
    cout<<"x do pot�gi 2 wynosi: "<<potega(x)<<endl;
    cout<<"x do pot�gi n wynosi: "<<potega(x,n)<<endl;
    
    system("PAUSE");
    return 0;
    
}

double potega (double x, int n)
{
       double w = 1;//wynik
       int k;
       
       k = (n<0)?-n:n;
       
       for(int i = 0; i<k ; ++i) w*=x;
       
       if(n>=0) return w;
       else return 1/w;
}

