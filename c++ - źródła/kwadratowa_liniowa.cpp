#include <iostream>
using namespace std;

float funkcja(float b, float c, float x, float a = 0)
{
	float wartosc = (a*x*x)+(b*x)+c;
	return wartosc;
}

int main()
{
	cout<<"wartosc funkcji wynosi: "<<funkcja(2,3,4)<<endl;
	return 0;
}
