#include<iostream>
using namespace std;

int p=100;

int main()
{
int p;
cout<<"enter a value\n";
cin>>p;

cout<<" value of p in  main = "<<p<<"\n\n";

cout<<" value of p in global = "<<::p<<"\n\n";     //  acvcsessing global data  p with  same name 

return 0;

}
