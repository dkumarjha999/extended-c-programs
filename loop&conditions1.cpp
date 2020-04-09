#include<iostream>
using namespace std;
int main()
{
int n, t=1;
cout<<"enter a number"<<"\n";
cin>>n;
cout<<"table of given number "<<n<<" is ="<<"\n";
for(int i=1;i<=20;i++)
{
for(int j=1;j<=10;j++)
{ cout<<n*t<<' ';
t++;}
cout<<"\n";
}
return 0;
}

