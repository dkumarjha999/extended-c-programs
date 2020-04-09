#include<iostream>
using namespace std;

template<class t>

void swap(t &x,t &y)
{
t z=x;
x=y;
y=z;
}

void fun(int m,int n,float p,float q)
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
fun(1,2,1.1,2.2);
return 0;
}
