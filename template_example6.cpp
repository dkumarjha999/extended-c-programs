#include<iostream>

using namespace std;

int s=5;

template<class t>

class vector
{
t* v1;
t* v2;
public:

vector(t* a, t* b)
{
v1=a;
v2=b;
t sum=0;
cout<<" elements are \n";
cout<<"v1\tv2\n\n";
for(int i=0;i<5;i++)
{
cout<<*v1<<"\t"<<*v2<<"\n";

sum+=(*v1)*(*v2);

v1++;
v2++;
}

cout<<" sum of product of vectors = "<<sum<<"\n\n";
}

};

int main()
{
int *m,*n;
int x[5],y[5];
cout<<" enter 5 element of 1st array\n";
for(int i=0;i<5;i++)
{cin>>x[i];}

cout<<" enter 5 element of 2nd array\n";
for(int i=0;i<5;i++)
{cin>>y[i];}

m=x;
n=y;
vector<int>v1(m,n);
float p[5],q[5];

cout<<" enter 5 element of 1st array\n";
for(int i=0;i<5;i++)
{cin>>p[i];}

cout<<" enter 5 element of 2nd array\n";
for(int i=0;i<5;i++)
{cin>>q[i];}
float *r,*s;
r=p;
s=q;
vector<float>v2(r,s);
return 0;
}

