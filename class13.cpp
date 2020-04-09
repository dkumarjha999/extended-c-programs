#include<iostream>
using namespace std;
class Int
{
int num;
public:
Int()
{num=0;}
void getnum()
{ int n;
cout<<" enter a number\n";
cin>>n;
num=n;
}
void show()
{cout<<" num ="<<num<<"\n";}
void add(Int n1,Int n2)  // object passed ag argument 
{int temp;
temp=n1.num+n2.num;
cout<<"addition of number two number is= "<<temp<<"\n";
}
};
int main()
{
Int n1,n2,n3;
n1.getnum();
n2.getnum();
n1.show();
n2.show();
n3.add(n1,n2);
cout<<"\n\n";
return 0;
}
