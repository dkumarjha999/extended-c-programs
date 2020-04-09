#include<iostream>
using namespace std;

int main()
{
int n;
const float gallon=1/7.481;
cout<<" one gallon contain cubic foot="<<gallon<<"\n";
cout<<"enter number of gallon"<<"\n";
cin>>n;
cout<<"total cubic foot in"<<n<<"gallon="<<n*gallon<<"\n";
return 0;
}
