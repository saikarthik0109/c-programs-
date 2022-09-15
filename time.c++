#include<iostream>
#include<iomanip>
#include<string>
 
using namespace std;
class time
{
	private:
		int min,sec,hrs;
	public:
		void setdata()
		{
			cout<<"enter seconds:";
			cin>>this->sec;
			cout<<"enter minutes:";
			cin>>this->min;
			cout<<"enter hours:";
			cin>>this->hrs;
		}
		void displaydata();
};
void time::displaydata()
{
	cout<<this->hrs<<"hrs:";
	if(min<=60)
	cout<<this->min<<"min:";
	else
	cout<<"enter correct value of minutes:";
	if(sec<=60)
	cout<<this->sec<<"sec:";
	else
	cout<<"enter correct value of seconds";
}
int main(int arge,char* argv[])
{
	time x;
	x.setdata();
	cout<<"time is:"<<endl;
	x.displaydata();
	cout<<endl;
	return 0;
}

output:1
enter seconds:22
enter minutes:30
enter hours:4
time is:
4hrs:30min:22sec

OUTPUT:2
enter seconds:90
enter minutes:78
enter hours:4
time is:
4hrs:enter correct value of minutes:enter correct value of seconds
