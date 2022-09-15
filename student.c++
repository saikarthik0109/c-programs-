#include<iostream>
#include<iomanip>
#include<string>

using namespace std;
class student
{
private:
int rollno;
string grade;
string studentname;
string fathername;
string mothername;

public:
void setdata()
{
cout<<"studentname:";
cin>>this->studentname;
cout<<"rollno:";
cin>>this->rollno;
cout<<"fathername:";
cin>>this->fathername;
cout<<"mothername:";
cin>>this->mothername;
cout<<"grade:";
cin>>this->grade;

}
void displaydata();
};
void student::displaydata()
{
cout<<"studentname:"<<this->studentname<<endl<<"rollno:"<<this->rollno<<endl
<<"fathername:"<<this->fathername<<endl<<"mothername:"<<this->mothername<<endl
<<"grade:"<<this->grade;
}
int main(int arge,char* argv[])
{
student x;
cout<<"fill in the details of student:"<<endl;
x.setdata();
cout<<"details of student:"<<endl;
x.displaydata();
cout<<endl;
return 0;
}
