#include<iostream>
using namespace std;
int main()
{
int p,s,w=1,t;
cout<<"how many persons  and sheets are there"<<"\n";
cin>>p>>s;
t=p;
for(int i=1;i<=s;i++)
{
w=w*p;
p--;
}
cout<<"total number of ways for arranging  "<<t[-0<<" person on "<< s<< " sheets= "<<w<<"\n";
return 0;
} 
