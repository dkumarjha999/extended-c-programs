#include<iostream>
using namespace std;
struct coordinate
{
int x,y;
};
int main()
{
coordinate p1,p2,p3;
cout<<" enter x and y coordinates of two points "<<"\n";
cin>>p1.x>>p1.y>>p2.x>>p2.y;
p3.x=p1.x+p2.x;
p3.y=p1.y+p2.y;
cout<<"sum of x and y co ordinates of given point "<<"("<<p1.x<<","<<p1.y<<")"<<","<<"("<<p2.x<<","<<p2.y<<")"<<" is = "<<"("<<p3.x<<","<<p3.y<<")"<<"\n";
return 0;
}

 
