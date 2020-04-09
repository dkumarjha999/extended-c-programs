#include<iostream>
using namespace std;

class date
{
int d,m,y;
public:
void getdate()
{
cout<<" enter a date\n";
cin>>d>>m>>y;
}
void show()
{
cout<<" date is = "<<d<<"/"<<m<<"/"<<y<<"\n\n";
}
date operator --(void)
{
if((d==1)&&((m==12)||(m==10)||(m==8)||(m==7)||(m==5)))
{d=30;m=m-1;}
else if((d==1)&&(m==3)&&((y%400==0)||((y%100!=0)&&(y%4==0))))
{d=29;m=2;}
else if((m==3)&&(d==1))
{d=28;m=2;}
else if((d==1)&&(m==1))
{d=31;m=12;y=y-1;}
else if((d==1)&&((m==2)||(m==4)||(m==6)||(m==9)))
{d=31;m=m-1;}
else
{d=d-1;}
}
};
int main()
{
date x;
x.getdate();
x.show();
--x;
x.show();
return 0;
}

