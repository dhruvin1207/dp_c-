#include<iostream>
using namespace std;
class fib{
	  public :void fibo()
	  {
	  
	  int a=0,b=1,i=0,temp,no;
	  cout<<"enter a number";
	  cin>>no;
	  cout<<a;
	  cout<<b;
	  
	  while(i<no)
	  {
	  	temp=a+b;
	  	cout<<temp;
	  	a=b;
	  	b=temp;
	  	i=i+1;
	  }
     }
};

class fact
{
   public: facto()
   {
    
	int no,fact=1,i;
	cout<<"Enter No:";
	cin>>no;
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
		cout<<"\t"<<fact;
	}
    }
};

main(){
	
	fib obj;
	obj.fibo();
	fact obj1;
	obj1.facto();
}



