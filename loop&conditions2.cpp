#include<iostream>
using namespace std;
int main()
{
int ch;
float f,c;
char val;
do
{
cout<<"enter 1 to convert farenheight to celcious"<<"\n";
cout<<"enter 2 to convert celcious to farenheight"<<"\n";
cout<<" enter your choice"<<"\n";
cin>>ch;
switch(ch)
{
case 1:
{
cout<<"enter ferenheight value"<<"\n";
cin>>f;
c=((f-32)/9)*5;
cout<<"celcious value of "<<f<<" farenheight="<<c<<"\n";
}break;
case 2:
{
cout<<" enter celcious value "<<"\n";
cin>>c;
f=(9*c)/5+32;
cout<<"farenheight value of "<<c<<" degree ="<<f<<"\n";
}break;
default: { cout<<"invalid case"<<"\n";}
}
cout<<" want to try again ? then enter y otherwise n "<<"\n";
cin>>val;
}
while(val=='y');
return 0;
}
