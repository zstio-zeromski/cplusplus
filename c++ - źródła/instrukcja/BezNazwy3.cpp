#include <iostream>

using namespace std;

int main()

{
int a;
cout<<"Podaj liczbe od 1 do 7"<<endl;
cin>>a;
switch(a)
{
	case 1:
	cout<<"Poniedzialek";
	break;
	case 2:
	cout<<"Wtorek";
	break;
	case 3:
	cout<<"Sroda";
	break;
	case 4:
	cout<<"Czwartek";
	break;
	case 5:
	cout<<"Piatek";
	break;
	case 6:
	cout<<"Sobota";
	break;
	case 7:
	cout<<"Niedziela";
	default:
		cout<<"podaj liczbe od 1 do 7"<<endl;
}
return 0;
}


