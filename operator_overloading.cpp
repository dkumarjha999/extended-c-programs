#include<iostream>
using namespace std;

int s;
cout<<" enter number of element in vector\n";
cin>>s;

class vector
{
int v[s];
public:
vector()
{
for(int i=0;i<s;i++)
{v[i]=0;}
}

vector(int *x)
{
for(int i=0;i<s;i++)
v[i]=x[i];
}

vector operator *(int a, vector b)
{
vector c;
for(int i=0;i<s;i++)
{
c.v[i]=a*b.v[i];
}
return c;
}

istream & operator >>(istream &cin,vector &b)
{
for(int i=0;i<s;i++)
{
cin>>b.v[i];
}
return(cin);
}

ostream & operator <<(ostream &cout,vector &b)
{
cout<<"( "<<b.v[0];
for(int i=1;i<s;i++)
{cout<<","<<b.v[i];}
cout<<")";
return (cout);
}
};

int main()
{
vector m;
int x[s];
m=x[s];
cout<<" enter elements of vector\n";
{cin>>x[s];}

cout<<" vector is = \n\n";
cout<<x[s];

vector  p;
p=2*m;

cout<<" p is \n"<<p[s]<<"\n\n";

return 0;
}

