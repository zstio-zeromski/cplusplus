#include <iostream>

using namespace std;

float potega(float a, int b)
{
	float wynik = 1;
	bool czy_ujemna;
	
	if(b==0)
	{
		return 1;
	}
	else 
	{	
		(b<0)?czy_ujemna=true,b=b*(-1):czy_ujemna=false;//wyra¿enie warunkowe

		for(int i=0; i<b; i++)
		{
			wynik = wynik * a;
		}	
	}
	if(!czy_ujemna)return wynik;//dla dodatnich
	if(czy_ujemna) return 1/wynik;//dla ujemnych
}


int main()
{
	cout<<potega(2,2)<<endl;
	
}

