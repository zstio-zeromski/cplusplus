#include <iostream>
using namespace std;

int suma(int a, int b)
{
	int c = a+b;
	return c;
}

void suma1(int a, int b)
{
	cout<<a<<"+"<<b<<"="<<(a+b)<<endl;
}

int main()
{
	int c=10, d=11;
	int e=suma(suma(12,3),d);
	cout<<e<<endl;
	suma1(12,c);
	return 0;
}
