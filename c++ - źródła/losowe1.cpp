#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	const int rozmiar=10;

	int t1[rozmiar];

	for(int i=0;i<rozmiar;i++)
	{
		t1[i]=rand() % 100 + 1;
		cout<<i<<"\t"<<t1[i]<<endl;	
	}
	
	int max = t1[0];
	for(int i=1;i<rozmiar;i++)
	{
		if(t1[i]>max) max = t1[i];	
	}
	cout<<"maksymalny elmement tablicy to: "<<max<<endl;
	
	return 0;	
}
