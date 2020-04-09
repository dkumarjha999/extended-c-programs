#include<iostream>
using namespace std;
void starline();  // defining function after function call
int main()
{
starline();
cout<<" data ranges for given datatype \n\n";
starline();
cout<<" char \t -128 to 127 \n";
cout<<" short \t -32768 to 32767 \n";
cout<<" int \t system dependent \n";
cout<<" long \t -2,147,483,648 to -2,147,483,647 \n";
starline();
return 0;
}
void starline()
{
for(int i=1;i<=45;i++)
    cout<<"*";
cout<<"\n\n";
}

