#include<iostream>
#include<iomanip>
using namespace std;
inline float volume(float a, float b, float c=1)
   {
	return a*b*c;
   }
    int main(int argc,char *argv[])
    {
      float x,y,z,v;
	  cout<<"enter values of 3 variables"<<endl;
	  cin>>x>>y>>z;
	  v=volume(x,y,z);
	  cout<<"the volume of a room : "<<v<<endl;
	  cout<<"enter 2 values of rectangle"<<endl;
	  cin>>x>>y;
	  v=volume(x,y);
	  cout<<"the area of the rectangle:"<<v<<endl;
	  return 0;	
	}
