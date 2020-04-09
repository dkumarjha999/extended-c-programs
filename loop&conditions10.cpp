#include<iostream>
using namespace std;
int main()
{
int r;
cout<<" enter number of rows"<<"\n";
cin>>r;
for(int i=r;i>0;i--)
{ 
for(int j=1;j<=i;j++)
{ 
 cout<<i<<" ";
}
cout<<"\n";
}
return 0;
}
