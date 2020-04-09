#include<iostream>
using namespace std;
class dist
{
private:
int ft;
float in;
public:
dist(int feet, float inch)
{
ft=feet;
in=inch;
}
void getdist()
{int feet;
float inch;
cout<<" enter distance in feet and inch\n";
cin>>feet>>inch;
ft=feet;
in=inch;
}
void show() const
{
cout<<" distance in feet and inch = "<<ft<<" , "<<in<<"\n";
}
};
int main()
{

const dist d1(100,3.6); // this line for constant function will work here object acting as constant object
// d2.getdist();
 // d2.show();
 		// but if we write  ogj.getdist it will not work
d1.show();
return 0;
}
