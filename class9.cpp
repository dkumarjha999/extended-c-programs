#include<iostream>
using namespace std;   //static variable using constructor
class ram
{
static int count;
public:
ram()
{count++;}
int show()
{return count;}
};
int ram::count=0;
int main()
{
ram r1,r2,r3;
cout<<" value of count = "<<r1.show()<<"\n";
cout<<" value of count = "<<r2.show()<<"\n";
cout<<" value of count = "<<r3.show()<<"\n";
return 0;
}

