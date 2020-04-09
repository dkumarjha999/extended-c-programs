#include<iostream>
using namespace std;
void zerosmaller(int& num1,int& num2);
int main()
{
int a,b;
cout<<" enter two numbers \n";
cin>>a>>b;
cout<<" entered two numbers are "<<a<<" , "<<b<<"\n\n";
cout<<" after finding maximum of number smaller=0, as = "; 
zerosmaller(a,b);
return 0;
}
void zerosmaller(int& x,int&y)
{ if(x>y)
{ y=0;
cout<<x<<" , "<<y<<"\n\n";
}
else
x=0;
cout<<x<<" , "<<y<<"\n\n";
}
