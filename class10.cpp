#include<iostream>
using namespace std;
class dist
{ private: int ft;
float in;
public:
void getdist()
{ int feet;
float inch;
cout<<" enter distance in feet and inch \n";
cin>>feet>>inch;
ft=feet;
in=inch;
}
void show()const
{
cout<<" distance in feet and inch is= "<<ft<<" , "<<in<<"\n";
}
dist add(dist&);
};
dist dist::add(dist& d2)
{
dist t;
t.in=in+d2.in;
if(t.in>=12)
{
t.ft=t.in/12;
t.in=t.in-12;
}
t.ft+=ft+d2.ft;
return t;
}
int main()
{
dist d1,d2,d3;
d1.getdist();
d2.getdist();
d1.show();
d2.show();
d3=d1.add(d2);
d3.show();
return 0;
}

