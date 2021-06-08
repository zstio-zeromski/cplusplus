#include <iostream>
using namespace std;

int suma(int a, int b, int c=10)
{
	return a+b+c;
} 

int suma(int a, int b)
{
	int c = a-b;
	return c;
}
int main()
{
	//int c=10, d=20;
	cout<<suma(10.0,30.0)<<endl;
	return 0;
}
