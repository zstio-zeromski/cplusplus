#include <iostream>
using namespace std;

int main()
{
	int a;
	cout<<"podaj liczbe"<<endl;
	cin>>a;
	cout<<"Zamówi³eœ ¿elka: ";
	switch(a)
	{
		case 1:
			cout<<"miœ"<<endl;
			break;
		case 2:
			cout<<"¿abka"<<endl;
			break;
		case 3:
			cout<<"serce"<<endl;
			break;
		default:
			cout<<"inny kszta³t"<<endl;
	}
	
	return 0;
	
}
