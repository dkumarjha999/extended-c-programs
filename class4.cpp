#include<iostream>
using namespace std;      //object as data type 
class dist
{
private:
int ft;
float inc;
public:
void getval()
{
int feet;
float inch;
cout<<" enter distance in feet and inches \n";
cin>>feet>>inch;
ft=feet;
inc=inch;
}
void show()
{
cout<<" entered distance in feet and inches are \n";
cout<<ft<<"\t"<<inc<<"\n";
}
void add( dist d1, dist d2)
{
inc=d2.inc+d1.inc;
if(inc>=12)
{ft=inc/12;
inc=inc-12;}
ft+=d1.ft+d2.ft;
cout<<" addition of distances = "<<ft<<"\t"<<inc<<"\n";
}
};
int main()
{
dist d1,d2,d3;
d1.getval();
d2.getval();
d1.show();
d2.show();
d3.add(d1,d2);
return 0;
}
