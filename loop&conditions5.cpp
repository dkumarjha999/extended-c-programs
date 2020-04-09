#include<iostream>
using namespace std;
int main()
{
int p,r,t,I,a;

cout<<" enter principle,rate of interest in percentage and time"<<"\n";
cin>>p>>r>>t;
a=p;
for( int i=1;i<=t;i++)
{
I=(p*r)/100;
p=p+I;
}
cout<<" total amount recived for principle "<<a<<" rupees in "<<t<<" year with rate of interest "<<r<<" percent in time " <<t<<" year is = "<<p<<"\n";
return 0;
}

