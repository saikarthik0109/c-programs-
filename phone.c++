#include<iostream>
#include<iomanip>
#include<string>

using namespace std;
class phone
{
private:
int cost;
int quantity;
int idnumber;
string name;
string madein;
public:
void setdata(){
cout<<"enter name:";
cin>>this->name;
cout<<"enter quantity:";
cin>>this->quantity;
cout<<"enter id number of phone:";
cin>>this->idnumber;
cout<<"made in:";
cin>>this->madein;
cout<<"enter cost of product:";
cin>>this->cost;}
void displaydata();
};
void phone::displaydata()
{
cout<<"name of phone:"<<this->name<<endl<<"idnumber:"<<this->idnumber<<endl
<<"quantity in number:"<<this->quantity<<endl<<"made in:"
<<this->madein<<endl<<"cost:"<<this->cost<<endl;
}
int main(int arge,char* argv[])
{
phone x;
cout<<"entered detailes of phone"<<endl;
x.setdata();
x.displaydata();
cout<<endl;
return 0;
}
