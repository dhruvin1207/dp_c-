#include<iostream>
using namespace std;
class cal
{
	public : calcu()
	{
	int a,b,add,multi,sub;
	float div;
	cout<<"enter a first number";
	cin>>a;
	cout<<"enter a second number";
	cin>>b;
	
	add=a+b;
	cout<<"additon = "<<add;
	sub=a-b;
	cout<<"substraction = "<<sub;
	multi=a*b;
	cout<<"multiplication = "<<multi;
	div=a/b;
	cout<<"division = "<<div;
   }
};

main()
{
	cal obj;
	obj.calcu();
}
