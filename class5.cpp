#include<iostream>
using namespace std;
class dist
{
private: int ft;
float in;
public:
void setdistance(int feet,float inch)
{ft=feet;
in=inch;}
void getdistance()   // here we are taking variable input for second object inide function using private data 
{
cout<<" enter distance in feet and inches \n";
cin>>ft>>in;
}
void showdistance()
{cout<<ft<<"-"<<in<<"\n";}
};
int main()
{dist d1,d2;
d1.setdistance(2,4.6);
d2.getdistance();
d1.showdistance();
d2.showdistance();
return 0;
}
