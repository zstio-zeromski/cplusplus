#include <iostream>
using namespace std;

int main()
{
	char a;
	int b;
	cout<<"podaj znak"<<endl;
	cin>>a;
	cout<<"podaj liczbe"<<endl;
	cin>>b;
	for(int i=b; i>0; --i)
	{
		cout<<a;	
	}
	
	return 0;
	
}
