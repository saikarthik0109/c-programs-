lude<iostream>
#include<iomanip>
using namespace std;
class A;
protected:
{
	int a;
	public:
    A(){
      a=0;	
	}
	A(int x)
	{
		a=x;
	}
	void getdata()
	{
		cout<<"enter a value:";
		cin>>a;
	}
	void display()
	{
		cout<<"a="<<a<<endl;
	}
};
class B:publuc A
{
	protected:
		int b;
		public:
			B()
			{
				b=0;
			}
		B(int x,int y):A(x),b(y)
		{
		}
	public:
		void display()
		 {
		 	cout<<endl;
		 	cout<<"a="<<a<<endl;
		 	cout<<"b="<<b<<endl;
		 }
	void display()
	{
		cout<<endl;
		cout<<"c="<<endl;
	}
};
   class D:public B,public C
   {
   	protected:
   		int d;
   		public:
   			D()
   			{
   				d=o;
			   }
		D(int w,int x,int Y,int z):B(w,x),C(y)
		{
		d=z;	
		}
	public:
		void display()
		{
			cout<<endl;
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
			cout<<"c="<<c<<endl;
			cout<<"d="<<d<<endl;
			cout<<"sum="<<setw(3)<<a+b+c+d<<endl;
			
		}
   };
    int main()
    {
    	A oa(5);
    	cout<<"value in oa(5)is";oa.display();
    		B ob(6,7);
    	cout<<"value in oa(5)is";ob.display();
    		C oc(8);
    	cout<<"value in oa(5)is";oc.display();
    		D od(1,2,3,4);
    	cout<<"value in oa(5)is";od.display();
    	return 0;
    	
	}
