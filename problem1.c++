#include"iostream"
using namespace std;
class number
{ 
    private:
	int a;
    public:
    	void getdata()
    	{
    		cout<<"enter a value :";
            cin>>this->a;		
        }   
    	void display()
    	{
    		cout<<"value a ="<<this->a<<endl;
		}
        void swap(number &x)
        {
        	int temp=x.a;
        	x.a=this->a;
        	this->a=temp;
		}
	void add(number x,number y,number z);
	void add(number x,number y);
	number operator+(number x);
	number& operator++();
};
    number &number::operator++()
    {
    	this->a=this->a+1;
	}
	number number::operator+(number x)
	
	{
		number temp;
		temp.a=this->a+x.a;
		return temp;
	}
    void number::add(number x,number y)
    {
    	this->a=x.a+y.a;
	}
	void number::add(number x,number y,number z)
	{
		this->a=x.a+y.a+z.a;
	}
	int main(int argc,char *argv[])
	{
		number obj1,obj2,obj3,obj4;
		cout<<"enter value for obj1"<<endl;
		obj1.getdata();
		cout<<"enter value of obj2"<<endl;
		obj2.getdata();
		cout<<"\nthe value of obj1"<<endl;
		obj1.display();
		cout<<"\n value of obj2"<<endl;
		obj2.display();
		obj3.add(obj1,obj2);
		cout<<"\ndetailes of obj3=obj1+obj2"<<endl;
		obj3.display();
		obj4.add(obj1,obj2,obj3);
		cout<<"\ndetailes of obj4=obj1+obj2+obj3"<<endl;
		obj4.display();
		
		obj1.swap(obj2);
		cout<<"\nafter swaping display values using pointer to array"<<endl;
		number *p1=&obj1,*p2=&obj2;
		cout<<"the value in obj1"<<endl;
		p1->display();
		cout<<" the value in obj2"<<endl;
		p2->display();
		cout<<"create an array of 5 objects"<<endl;
		number objects[5];
		cout<<"enter 5 values of 5 objects"<<endl;
		for(int i=0;i<5;i++)
		{
			objects[i].getdata();
		}
		cout<<"\n displayingvalues of 5 arrayobjects using pointers to an arrayof 5 objects"<<endl;
		p1=objects;
		for(int i=0;i<5;i++)
		{
			p1->display();
			++p1;
		}
		number obj5;
		obj5=obj1+obj2;
		cout<<"\ndetailes of obj5=obj1+obj2 using operator overloading+"<<endl;
		obj5.display();
		++obj5;
		cout<<"after ++obj the detailes of obj5"<<endl;
		return 0;	
		
	}
