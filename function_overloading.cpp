#include<iostream>
using namespace std;
class over
{
	public:x(int r)
	{
		int circle;
		circle=3.14*r*r;
		cout<<"the area of circle is :"<<circle;
	}
	
		public:x(int l,int b)
	{
		int ract;
		ract=l*b;
		cout<<"the area of ractangle is :"<<ract;
	}
	
		public:x(float a,float b)
	{
		int tri;
		tri=1/2*a*b;
		cout<<"the area of triangle is :"<<tri;
	}
};

main()
{
	over obj;
	obj.x(10);
	obj.x(10,20);
//	obj.x(10.2,20.8);
}
