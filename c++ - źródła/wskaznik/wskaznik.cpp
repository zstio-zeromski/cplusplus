#include <iostream>

using namespace std;
int suma(int a, int b)
{
	int s=a+b;
	return s;
}
void zamien(int *a, int *b)
{
	int pom = *a;
	*a=*b;
	*b=pom;
}

int main()
{
	int a=5,b=10;

	zamien(&a,&b);
	cout<<a<<" "<<b<<endl;

	double *d;
	double c=5.01;
	d=&c;
	
	*d+=0.3;
	
	cout<<*d;
	
	return 0;
}
