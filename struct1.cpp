#include<iostream>
using namespace std;
struct phone
{
int areacode,exchange,number;
};
int main()
{
phone p1={121,133,9987},p2;
cout<<"enter area code,exchangeand number for second phone number"<<"\n";
cin>>p2.areacode>>p2.exchange>>p2.number;
cout<<" entered two numbers are "<<"\n";
cout<<"( "<<p1.areacode<<" )"<<p1.exchange<<p1.number<<"\n";
cout<<"( "<<p2.areacode<<" )"<<p2.exchange<<p2.number<<"\n";
return 0;
}
