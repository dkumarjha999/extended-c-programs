#include<iostream>
using namespace std;
int main()
{
int n;
char ch;
start: // goto sattement ka control transfer krne ke liye start : level define kiya h
cout<<"enter a number "<<"\n";
cin>>n;
 int fact=1;
cout<<"factor of number "<<n<<" is = ";
while(n>0)
{
fact=fact*n;
n--;
}
cout<<fact<<"\n";
cout<<" do u want check other number then y otherwise enter n "<<"\n";
cin>>ch;
if( ch=='y')
{
goto start;
}
return 0;
}
