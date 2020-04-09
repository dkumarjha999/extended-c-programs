#include<iostream>
using namespace std;
class toolbooth
{
int totalcar;
double totalcash;
public:
int payingcar()
{
int count1;
double money;
money=money+50;
count1++;
totalcash=money;
return count1;
}							//is program ko phir se check kro
int nonpaying()
{
int count2;
count2++;
return count2;
}
void show()
{
totalcar=payingcar();
cout<<totalcar;
totalcar+=nonpaying();
cout<<"total number of cars = "<<totalcar<<"\n";
cout<<" total money collected = "<<totalcash<<"\n";
}
};
int main()
{
toolbooth c1,c2,c3,c;
c1.payingcar();
c2.nonpaying();
c3.payingcar();
c.show();
return 0;
}



