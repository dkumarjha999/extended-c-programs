#include<iostream>
using namespace std;
void power(double value,int =2);
int main()
{
int pow;
double num,num1;
cout<<" enter number and its power \n";
cin>>num>>pow;
cout<<" value of number= ";
power(num,pow);
cout<<"\n\n";
cout<<" input any default number \n\n";cin>>num1;
cout<<"  square value for default number =\n\n";
power(num1);
cout<<"\n\n";
}
void power(double n,int p)
{
 int val=1;
for(int i=1;i<=p;i++)
  {val=val*n;}
cout<<val;
}



