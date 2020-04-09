#include<iostream>
using namespace std;

void swap(float &x, float &y)
{
float t;
t=x;
x=y; 
y=t;
cout<<" value after swapping in swap fun = "<<x<<"\t"<<y<<"\n\n";
}

int main()
{
float a,b;
cout<<" enter two numbers\n";
 cin>>a>>b;

cout<<" entered values are = "<<a<<"\t"<<b<<"\n\n";

swap(a,b);

cout<<" value after swpping in main = "<<a<<"\t"<<b<<"\n\n";

return 0;
}
