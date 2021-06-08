#include <iostream>
using namespace std;

//PRZE£ADOWANIE NAZW FUNKCJI 
//suma nr 1
int suma(int a, int b, int c)//int c=30 - b³¹d
{
	return a+b+c;
} 

//suma nr 2
int suma(int a, int b)
{
	return a-b;
}

//suma nr 3
double suma(double a, double b, double c)
{
	return a+b+c;
}

//suma nr 4
double suma(double a, double b)
{
	return a-b;
}

int main()
{
	//wywo³anie funcji suma nr 1
	cout<<suma(10,20,30)<<endl;
	//wywo³anie funcji suma nr 2
	cout<<suma(10,20)<<endl;
	//wywo³anie funcji suma nr 3
	cout<<suma(10.0,20.0, 30.5)<<endl;
	//wywo³anie funcji suma nr 4
	cout<<suma(10.0,20.5)<<endl;
	return 0;
}
