#include<iostream>
using namespace std;

int main()
{
int *p,*t,m,x=0;
cout<<" enter size of array\n";
cin>>m;
p=new int[m];    //to create array using new  poiunter concept
t=p;
cout<<" enter "<<m<<" element of array\n";
for(int i=0;i<m;i++)
{
cin>>*p;
p++;
}
cout<<" entered array = \n";
for(int i=0;i<m;i++)
{cout<<*t<<" ";
x+=*t;
t++;}

cout<<"\n sum of element of array = "<<x<<"\n\n";
return 0;

}
