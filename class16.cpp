#include<iostream>
using namespace std;
class employee
{
private: 
int no;
float salary;
public:
void getdata(int num,float income)
{
no=num;
salary=income;
}
void show()
{
cout<<" employee number and salary = "<<no<<" , "<<salary<<"\n";
}
};
int main()
{
employee e[3];
int num;
float income;
cout<<" emnter employee number and salary of 3 employee \n";
for(int i=1;i<=3;i++)
{
cin>>num>>income;
e[i].getdata(num,income);
}
cout<<" entered details of 3 employee = \n";
for(int i=1;i<=3;i++)
{e[i].show();}
return 0;
}
