#include <iostream>

using namespace std;

int main()
{
	int n;
	cout<<"podaj n"<<endl;
	cin>>n;
	
	int i=2;
	
	while(n>=2)
	{
		while(n%i==0)
		{
			cout<<i<<" ";
			n=n/i;
		}
		i=i+1;
	}
	
	return 0;
}
