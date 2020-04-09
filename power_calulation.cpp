#include<iostream>
using namespace std;

void power(float x, int y=2)
{
float t=1;
for(int i=0;i<y;i++)
{t*=x;}
cout<<" value of "<<x<<" reised to power "<<y<<" is = "<<t<<"\n\n";
}

int main()
{
float p;
int q,ch;
cout<<" enter 1 for any base any power \n 2 for any base square \n enter your choice\n";
cin>>ch;
switch(ch)
{
case 1:
{
cout<<" enter base(can be int/float) , power(in int) \n";
cin>>p>>q;
power(p,q);
}break;
case 2:
{
cout<<" enter base (any value int/ float)\n";
cin>>p;
power(p);
}break;
default:{cout<<" invalid choice\n";}

}
return 0;

}
