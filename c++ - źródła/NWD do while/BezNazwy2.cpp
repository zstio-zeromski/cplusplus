#include<iostream>
using namespace std;
int a;
int b;
int r;
int main()
{
	cout<<"Podajpierwsza liczbe:";
    cin>>a;
    cout<<"Podajdruga liczbe:";
    cin>>b;
	do
	{	
	r=a%b;
	a=b;
	b=r;
	}
	while(b!=0);
cout<<"NWD="<<a<<endl;
}
