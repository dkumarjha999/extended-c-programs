#include<iostream>
using namespace std;

int main()
{
int a[10],b[10],c[10];
cout<<" enter 5 element of array\n";
for(int i=0;i<5;i++)
{cin>>a[i];}
cout<<" enter 5 element of 2nd array\n";
for(int i=0;i<5;i++)
{cin>>b[i];}

//c=a+b
cout<<" c= a+b \n";
for(int i=0;i<5;i++)
{
c[i]=a[i]+b[i];
cout<<c[i]<<"\t";
}

cout<<"\n\n";

// c=a-b

cout<<" c = a-b \n";
for(int i=0;i<5;i++)
{
c[i]=a[i]-b[i];
cout<<c[i]<<"\t";
}
cout<<"\n\n";


// c = a*b 

cout<<" c = a*b \n";
for(int i=0;i<5;i++)
{
c[i]=a[i]*b[i];
cout<<c[i]<<"\t";
}

cout<<"\n\n";

return 0;

}
