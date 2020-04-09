#include<iostream>
using namespace std;
struct match
{
char name[50];     // gdd okk
int run,inn,tnot;
};
int main()
{
int n;
cout<<" enter number of player\n";
cin>>n;
match m[n];
cout<<" enter details\n";
for(int i=0;i<n;i++)
{
cout<<" name\n";
cin>>m[i].name;

cout<<"  total runs\n";
cin>>m[i].run;
cout<<" total inning \n";
cin>>m[i].inn;
cout<<" total  number of not out \n";
cin>>m[i].tnot;
}


cout<<" entered details are\n";
for(int i=0;i<n;i++)
{cout<<" name = "<<m[i].name<<"\t total run = "<<m[i].run<<"\t total inning = "<<m[i].inn<<"\t total number of not out = "<<m[i].tnot<<"\n";}

return 0;
}
