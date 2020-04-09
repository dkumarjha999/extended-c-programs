#include<iostream>
using namespace std;

class vector
{
int *v,s;
public:
vector(int m)
{
v=new int[s=m];
for(int i=0;i<m;i++)
{v[i]=0;}
}
vector(int *a)
{
for(int i=0;i<s;i++)
{v[i]=a[i];}
}

void show()
{
for(int i=0;i<s;i++)
{cout<<v[i]<<"\t";}
}

int operator * (vector &y)
{
int sum=0;
for(int i=0;i<s;i++)
{
sum+= this->v[i]*y.v[i];
}
return sum;
}

};
int main()
{

int n;
cout<<"entre size of arrays\n";
cin>>n;
int p[n],q[n];




cout<<" enter " <<n<< "  elements of first array\n";
for(int i=0;i<n;i++)
{cin>>p[i];}

cout<<" enter "<<n<<" elements of second array\n";
for(int i=0;i<n;i++)
{cin>>q[i];}

vector v1(n),v2(n);
v1=p;
v2=q;

v1.show();
v2.show();
int r;
cout<<" multiplication and their sum = "<<r<<"\n\n";
r=v1*v2;

cout<<" multiplication and their sum = "<<r<<"\n\n";

return 0;
}

