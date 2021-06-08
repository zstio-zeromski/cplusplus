#include <iostream>
using namespace std;

int main()
{
	char a;
	cout<<"podaj znak"<<endl;
	cin>>a;
	switch(a)
	{
		case 'A':
			cout<<65<<endl;
			break;
		case 'B':
			cout<<66<<endl;
			break;
		case 'C':
			cout<<67<<endl;
			break;
		default:
			cout<<"niokreslony kod"<<endl;	
	}
	
	return 0;
	
}
