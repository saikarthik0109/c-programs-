#include<iostream>
#include<iomanip>
#include<string>

using namespace std;
class bank
{
private:
int balance;
int accountnumber;
string accountholder;
string bankname;
string type;

public:
void setdata()
{
cout<<"bankname:";
cin>>this->bankname;
cout<<"accountholder:";
cin>>this->accountholder;
cout<<"accountnumber:";
cin>>this->accountnumber;
cout<<"type:";
cin>>this->type;
cout<<"balance:";
cin>>this->balance;

}
void displaydata();
};
void bank::displaydata()
{
cout<<"bankname:"<<this->bankname<<endl<<"accountholder:"<<this->accountholder<<endl
<<"accountnumber:"<<this->accountnumber<<endl<<"type:"<<this->type<<endl
<<"balance:"<<this->balance;
}
int main(int arge,char* argv[])
{
bank x;
cout<<"fill the details:"<<endl;
x.setdata();
cout<<"full details:"<<endl;
x.displaydata();
cout<<endl;
return 0;
}
