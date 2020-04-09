#include<iostream>
using namespace std;
float circlearea(float radius);
int main()
{
float rad;
cout<<" enter the value of radius \n";
cin>>rad;
cout<<" area of circle with radius = "<<rad<<" is = "<<circlearea(rad);
cout<<"\n\n";
return 0;
}
float circlearea(float r)
{ return(3.14*r*r);}
