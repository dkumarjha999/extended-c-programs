#include<iostream>
using namespace std;
int main()
{
float c,f,f1,c1;
cout<<"enter degree celcious"<<"\n";
cin>>c;
f=(1.8*c)+32;
cout<<"ferenheit value of="<<c<<" degree is="<<f<<"\n";
cout<<"enter value in farenheit"<<"\n";
cin>>f1;
c1=((f-32)/9)*5;
cout<<"degree celcious of "<<f<<" ferenheight is="<<c1;
return 0;
}
