#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"wypisz a b i c"<<endl;
	cin>>a>>b>>c;
	if(a<b)
	{
		if(c<b)
		{
			cout<<"B jest najwieksza liczba"<<endl;
		}
		else
		{
			cout<<"C jest najwieksza liczba"<<endl;
		}
	}
	else
	{
		if(a<c)
			{
				cout<<"c jest najwieksza liczba"<<endl;
			}
			else
			{
				cout<<"a jest najwieksza"<<endl;
			}	
	}
	return 0;
}
