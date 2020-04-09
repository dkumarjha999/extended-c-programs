#include<iostream>
using namespace std;

class temp
{
float f,c;
public:
void getdata()
{
cout<<" enter temperature in farenheight\n";
cin>>f;
}
void show()
{
c=(5*(f-32))/9;
cout<<" temperature in farenheight = "<<f<<" converted in degree celcious = "<<c<<"\n\n";
}
};

int main()
{
temp t;

t.getdata();

t.show();

return 0;
}
