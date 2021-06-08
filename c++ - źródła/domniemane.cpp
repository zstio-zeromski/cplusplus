#include <iostream>
using namespace std;

//b jest argumentem domniemanym, który domyœlnie przyjmuje wartoœæ 10, argumenty domniemane, umieszczamy jako skrajne elementy z prawej strony
int suma(int a, int b=10)
{
	int c = a+b;
	return c;
}

int main()
{
	int c=10, d=20;
	cout<<suma(d)<<endl;
	cout<<suma(c,d)<<endl;
	return 0;
}
