                                           
#include<iostream>
using namespace std;
void disp(distance);
struct distance                                   // passing structure in a function as its argument
{
int  feet;
float inch;
};
int main()
{
distance d1={2,3.4};
 cout<<"\n entered first distane d1 = "<< disp(d1);
return 0;
}
void disp( distance dd)
{
cout<<dd.feet<<" - "<<dd.inch;
}


