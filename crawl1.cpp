//include the library
#include<iostream>
using namespace std;
//declare the main function
int main()
{
//the process begins
//declare all necessary variables
char x='a';
int y=5;
float z=3.22;
double p=6.4567;
bool q=3456;
//to know the size
cout<<"size of char-"<<sizeof(char)<<" bytes;"<<"contents of x="<<x<<endl;
cout<<"size of int-"<<sizeof(int)<<" bytes;"<<"contents of y="<<y<<endl;
cout<<"size of float-"<<sizeof(float)<<" bytes;"<<"contents of z="<<z<<endl;
cout<<"size of double-"<<sizeof(double)<<" bytes;"<<"contents of p="<<p<<endl;
cout<<"size of boolean-"<<sizeof(bool)<<" bytes;"<<"contents of q="<<q<<endl;
return 0;
}
