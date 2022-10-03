//PRINT A STRING :

#include<iostream>
using namespaxe std;
int main()
{ 
  cout<<"c++ is better than c.\n";
  return 0;
}


//AVERAGE OF 2 NUMBERS :

#include<iostream>
using namespacee std:
int main()
{
  float num1,num2,sum,avg;
  cout<<"enter 2 numbers:';
  cin>>num1;
  cin>>num2;
  sum=num1+sum2;
  avg=sum/2;
  cout<<"average :"<<avg<<"\n";
  return 0;
  }
  
  
//USE OF CLASS :

#include<iostream>
using namespace std;
class person
{
	char name[30];
	int age;
	public:
		void getdata(void);
		void display(void);
};
void person::getdata(void)
{
	cout<<"enter name:";
	cin>>name;
	cout<<"enter age:";
	cin>>age;
}
void person::display(void)
{
	cout<<"\nname:"<<name;
	cout<<"\nage:"<<age;
}
int main()
{
	person p;
	p.getdata();
	p.display();
	return 0;
}


//USE OF NEW AND DELETE OPERATOR :

#include<iostream>
using namespace std;
int main()
{
	int *arr;
	int size;
	cout<<"enter the size of integer array";
	cin>>size;
	cout<<"creating an array of size "<<size<<"..";
	arr=new int[size];
	cout<<"\ndynamic allocation of memory for array arr is successful";
	delete arr;
	return 0;
}


//SCOPE RESOLUTION OPERATOR :

#include<iostream>
using namespace std;
int m=10;
int main()
{
	int m=20;
	{
		int k=m;
		int m=30;
		cout<<"we are in inner block\n";
		cout<<"k="<<k<<"\n";
		cout<<"m="<<m<<"\n";
		cout<<"::m="<<::m<<"\n";
	}
	cout<<"\nwe are in outer block\n";
	cout<<"m="<<m<<"\n";
	cout<<"::m="<<::m<<"\n";
	return 0;
}


//USE OF BAD-ALLOC EXCEPTIONS :

#include<iostream>
using namespace std;
class sample
{
	private:
		int data1;
		char data2;
	public:
	      void set(int i,char c)
	      {
	      	data1=i;
	      	data2=c;
		      }
		void display(void)
		{
			cout<<"data1="<<data1;
			cout<<"\ndata2="<<data2;
			      }      	
};
int main()
{
	sample *s_ptr;
       try
	{
		s_ptr=new sample;
	 } 
       catch(bad_alloc ba) 
       {
       	cout<<"bad allocation occured...the program will terminate now..";
       	return 1;
	}
	s_ptr->set(25,'a');
	s_ptr->display();
	delete s_ptr;
	return 1;
}



//USE OF MANIPULATORS;

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int basic=950,allowance=95,total=1045;
	cout<<setw(10)<<"basic"<<setw(10)<<basic<<endl<<setw(10)<<"allowance"<<setw(10)
           <<allowance<<endl<<setw(10)<<"total"<<setw(10)<<total<<endl;
	    return 0;	
}


//EXPLICIT R=TYPE CASTING :

#include<iostream>
using namespace std;
int main()
{
	int intvar=25;
	float floatvar=35.87;
	cout<<"intvar="<<intvar;
	cout<<"\nfloatvar="<<floatvar;
	cout<<"\nfloat(intvar)="<<float(intvar);
	cout<<"\nint(floatvar)="<<int(floatvar);
	return 1;
}


//INLINE FUNCTOIION :


