#include <iostream>
using namespace std;

int main()
{
	int a;
	cout<<"podaj liczbe"<<endl;
	cin>>a;
	cout<<"Zam�wi�e� �elka: ";
	switch(a)
	{
		case 1:
			cout<<"mi�"<<endl;
			break;
		case 2:
			cout<<"�abka"<<endl;
			break;
		case 3:
			cout<<"serce"<<endl;
			break;
		default:
			cout<<"inny kszta�t"<<endl;
	}
	
	return 0;
	
}
