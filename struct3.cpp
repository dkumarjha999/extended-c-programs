#include<iostream>
using namespace std;
struct employee
{
int idno[3];
float salary[3];
};
int main()
{
employee e;
for(int i=1;i<=3;i++)
{
cout<<" enter id number and salary of "<<i<<" employee "<<"\n";
cin>>e.idno[i]>>e.salary[i];
}
for(int i=1;i<=3;i++)
{
cout<<" entered id number and salary of "<<i<<" employee "<<"\n";
cout<<e.idno[i]<<"\t"<<e.salary[i]<<"\n";
}
return 0;
}
