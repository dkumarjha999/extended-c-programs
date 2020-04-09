#include<iostream>
using namespace std;
class account
{private:
char name[20];
int ac;
float p,a; int t;
static float r;
public:
void getdata()
{
char n[20];
int account;

cout<<" enter name and account number \n";
cin>>n>>account;
float prin;
int time;
cout<<" enter principle and time \n";
cin>>prin>>time;
}
void show() const
{
cout<<" name of customer = "<<name[20]<<"\n";
cout<<" account number of customer = "<<ac<<"\n";		// phir se try kro
cout<<" initial amountof customer = "<<p<<"\n";
cout<<" time in which principle increased ="<<t<<"\n";
cout<<" final amount after given year ="<<a<<"\n";
}
account amount(const account &);
};
float account::r=4.5;
account account::amount(const account& c1)
{
account temp;
temp.a=temp.p;
for(int i=0;i<=t;i++)
 { temp.a=temp.a+(temp.a*temp.r)/100;}
return temp;
}
int main()
{
account a1,a2;
a1.getdata();
 a2=amount(a1);
a2.show();
return 0;
}
