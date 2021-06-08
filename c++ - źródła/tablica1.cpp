#include <iostream>

using namespace std;

int main()
{
	const int rozmiar=100;

	char t1[rozmiar];
	t1[0]='a';
	t1[1]='4';
	t1[1]='5';
	
	t1[6]='c';
	t1[9]='d';
	
	for(int i=0;i<rozmiar;i++)
	{
		cout<<i<<"\t"<<t1[i]<<endl;	
	}
	
	return 0;	
}


