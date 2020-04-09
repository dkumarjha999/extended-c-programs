#include<iostream>
using namespace std;
class dist
{
private: int ft;
  float in;
public: dist()
      {ft=0;in=0;}
void getdist()
  { int feet;
   float inch;
 cout<<" enter distance in feet and inches \n";
 cin>>feet>>inch;
  ft=feet;
    in=inch;   }
void showdist()
   { cout<<" distance in feet and inch = \t"<<ft<<" , "<<in<<"\n";  }
void add(dist d1,dist d2)
 {
 in=d1.in+d2.in;
   if(in>=12)
	{ft=in/12;
	 in=in -12;
	 }
	ft+=d1.ft+d2.ft;
   cout<<"addition of two distances is = "<<ft<<" , "<<in<<"\n";
  }
};
int main()
{
dist d1,d2,d3;
 d1.getdist();
d2.getdist();
 d1.showdist();
d2.showdist();
d3.add(d1,d2);
return 0;
}


