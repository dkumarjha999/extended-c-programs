#include<iostream>
using namespace std;
class dist
{
private:
int ft;
float in;
public:
dist ()
{
ft=0;
in=0;
}
dist(int feet,float inch)	// constructor for giving constant value for d1
{
ft=feet;
in=inch;
}
 void getdist()
{int feet;
float inch;
cout<<" enter distance in feet and inch \n";
cin>>feet>>inch;
ft=feet;
in=inch;
}
void show()
{ cout<<" distance in feet and inches = "<<ft<<" , "<<in<<"\n";}
dist add(dist);
};
dist dist::add(dist d2)
{
dist temp;		// returning object type data temp which contain inch and feet 
temp.in=in+d2.in;
if(temp.in>=12)
{ temp.ft=temp.in/12;
 temp.in=temp.in-12;
}
temp.ft+=d2.ft+ft;
return temp;
}

int main()
{
dist d2,d3;
dist d1(12,3.6);	//calling constructor by using fix parameter and class name 
d2.getdist();
d1.show();
d2.show();
d3=d1.add(d2);
d3.show();
return 0;
}

