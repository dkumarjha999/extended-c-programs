#include<iostream>
using namespace std;
const int  s=5;
template<class t>
class vector
{
t*v;
public:
vector()
{
v=new t[s];
for(int i=0;i<s;i++)
{v[i]=0;}
}

vector(t* a)
{
for(int i=0;i<s;i++)
{v[i]=a[i];}
}

t operator*(vector &y)
{
t sum=0;
for(int i=0;i<s;i++)
{sum+=this->v[i]*y.v[i];}
return sum;
}

};

int main()
{
int x[10],y[10];

cout<<" enter  element of array\n";
for(int i=0;i<10;i++)
{cin>>x[i];}

cout<<" enter  element of array\n";
for(int i=0;i<10;i++)
{cin>>y[i];}

vector<int>v1;
vector<int>v2;

v1=x;
v2=y;
int r=0;

r=v1*v2;
cout<<" product of two vector = "<<r<<"\n\n";

return 0;
}


