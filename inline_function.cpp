#include<iostream>
using namespace std;

inline int cube(int a)
{
	return a*a*a;
}

inline int multi(int x)
{
	return x*x;
}

main()
{
	int b=3;
	cout<<cube(b);
	int y=5;
	cout<<multi(y);
	
}
