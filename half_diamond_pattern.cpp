#include<iostream>
using namespace std;

int main()
{
int n;
cout<<" enter limiting point of pattern\n";
cin>>n;
for(int i=1;i<=n;i++)
{
for(int j=1;j<=i;j++)
{cout<<i<<" ";}
cout<<"\n";
}

// opposite pattern put i=n

for(int i=n-1;i>=1;i--)  // putting n-1 we get half diamond pattern
{
for(int j=1;j<=i;j++)
{cout<<i<<" ";}
cout<<"\n";
}



return 0;
}

