#include<iostream>
using namespace std;
class time
{
 private: int d,hr,mt,sc;
public:
void gettime()
{
int day=0, hour,mint,sec;
cout<<" enter hour minutes and second \n";
cin>>hour>>mint>>sec;
if(hour>=24)
 {day=hour/24;
hour=hour%24;}
if(mint>=60)
  {hour=hour+mint/60;
	mint=mint%60;}
 if(sec>=60)
  {mint=mint+sec/60;
	sec=sec%60;}
d=day;
hr=hour;
mt=mint;
sc=sec;
}
void show()
{
if(hr>=12)
{
hr=hr-12;
cout<<" time is="<<d<<":"<<hr<<"pm :"<<mt<<":"<<sc<<"\n";
}
else
cout<<" time is="<<d<<":"<<hr<<"am :"<<mt<<":"<<sc<<"\n";
}
void add(time& t1, time& t2)
{
 time temp;
temp.d=t1.d+t2.d;			// fir se check kro isko
temp.hr=t1.hr+t2.hr;
if(temp.hr>=24)
{
temp.d+=(temp.hr)/24;
temp.hr=(temp.hr)%24;
}
temp.mt=t1.mt+t2.mt;				
if(temp.mt>=60)					//gd now it is working !!!!  
{temp.hr=temp.hr+(temp.mt)/60;
temp.mt=(temp.mt)%60;}
temp.sc=t1.sc+t2.sc;
if(temp.sc>=60)
{temp.mt=temp.mt+(temp.sc)/60;
temp.sc=(temp.sc)%60;}
if(temp.hr>=12)
{
temp.hr=temp.hr-12;
cout<<" addition of time is="<<temp.d<<":"<<temp.hr<<"pm :"<<temp.mt<<":"<<temp.sc<<"\n";
}
else
cout<<" addition of time is="<<temp.d<<":"<<temp.hr<<"am :"<<temp.mt<<":"<<temp.sc<<"\n";
}
}p,q,r;					// iska object class k sath define krne prr work kr rha h why ?? . main m error aa rha h why ??
int main()
{
p.gettime();
q.gettime();
r.add(p,q);
p.show();
q.show();

return 0;
}

