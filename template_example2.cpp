#include<iostream>
using namespace std;

template<class t1, class t2>

class test
{
t1 a;
t2 b;
public:
test(t1 x, t2 y)
{
a=x;
b=y;
}
void show()
{
cout<<" values are\t "<<a<<" \t"<<b<<"\n\n";
}

};

int main()
{
test<float,int> p1(1.23,1223);
test<int,char> p2(100,'x');

p1.show();
p2.show();

return 0;

}

