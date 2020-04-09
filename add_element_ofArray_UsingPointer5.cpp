#include<iostream>

using namespace std;

void add(int *a)
{
float sum=0;
for(int i=0;i<10;i++)
{

cout<<*a<<" ";
sum+=*a;
a++;
}
cout<<"\n sum = "<<sum<<"\n\n";
}

int main()
{
int *p;
int ar[10];
cout<<" enter a array\n";
for(int i=0;i<10;i++)
{cin>>ar[i];}

p=ar;

add(p);

return 0;
}
