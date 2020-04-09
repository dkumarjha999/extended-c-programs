#include<iostream>
using namespace std;
 class complex
{
float x,y;
public:
void getdata()
{
cout<<" enter real and imaginary parts\n";
cin>>x>>y;
}
void show()
{
cout<<" complex number = "<<x<<"+ i"<<y<<"\n\n";
}

complex inadd(complex z)
{
x=x+z.x;
y=y+z.y;
}
friend complex add(complex p, complex r);
};

complex add (complex p, complex r)
{
complex t;
t.x=p.x+r.x;
t.y=p.y+r.y;

return t;
}

int main()
{
complex c1,c2;
c1.getdata();
c2.getdata();
c1.show();
c2.show();

complex c3;
c3=add(c1,c2);
c3.show();

c3.inadd(c2);
c3.show();
return 0;
}
