#include<iostream>
using namespace std;

void matrix(int m,int n)
{
float a[m][n];
cout<<" enter element of matrix\n";
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{cin>>a[i][j];}
}
cout<<" given matrix is\n";
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cout<<a[i][j]<<"\t";
}
cout<<"\n";
}

}


int main()
{
int p,q;
cout<<" enter order of matrix\n";
cin>>p>>q;
matrix(p,q);

return 0;
}
