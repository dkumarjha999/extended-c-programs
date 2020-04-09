#include<iostream>
using namespace std;   // example program for giving some fix value in main
 class part
{
private: int modelnum,partnum;
float cost;
public:void getval(int mn,int pn,float cst)
 {
modelnum=mn;
partnum=pn;
cost=cst;
}
void showval()
{
 cout<<" modet number , part number & cost are given below \n";
 cout<<modelnum<<"\t"<<partnum<<"\t"<<cost<<"\n";
}
};
int main()
{
part p;
p.getval(1998,234,5000);
p.showval();

return 0;
}
