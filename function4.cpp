#include<iostream>
using namespace std;
void starline(char print,int repeat);  // defining function after function call and passing value for loop and char
int main()
{
int n;
char ch;
cout<<" enter character to print and number for repeting character\n";
cin>>ch>>n;
starline(ch,n);
cout<<" data ranges for given datatype \n\n";
starline(ch,n);
cout<<" char \t -128 to 127 \n";
cout<<" short \t -32768 to 32767 \n";
cout<<" int \t system dependent \n";
cout<<" long \t -2,147,483,648 to -2,147,483,647 \n";
starline(ch,n);
return 0;
}
void starline(char character,int number)
{
for(int i=1;i<=number;i++)
    cout<<character;
cout<<"\n\n";
}

