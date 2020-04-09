#include<iostream>
using namespace std;

int main()
{
float p,r,t,a,x;
cout<<" enter principal , rate of interest, time\n";
cin>>p>>r>>t;

for(int i=1;i<=t;i++)
{
x=(p*(1+r/100));
p=x;
}
a=p;
cout<<" total amount after "<<t<<" year = "<<a<<"\n\n";
return 0;
}
