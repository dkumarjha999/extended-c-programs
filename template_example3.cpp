#include<iostream>
using namespace std;

template<class t>

void swap(t &x,t &y)
{

t temp=x;
x=y;
y=temp;

}

void function(int m, int n, float p, float q)
{
cout<<" value before swap = "<<m<<"\t"<<n<<"\n\n";
swap(m,n);
cout<<" value after swap = "<<m<<"\t"<<n<<"\n\n";

cout<<" value before swap = "<<p<<"\t"<<q<<"\n\n";
swap(p,q);
cout<<" value after swap = "<<p<<"\t"<<q<<"\n\n";
}

int main()
{
cout<<" enter four value two integer and two float\n";
int a,b;
   float c,d;
cin>a>>b>>c>>d;
function(a,b,c,d);
return 0;
}
