#include<iostream>
using namespace std;
void repchar(char pattern,int repetion);  // defining function by passing argument
int main()
{
repchar('*',40);
cout<<" data ranges for given datatype \n\n";
repchar('+',50);
cout<<" char \t -128 to 127 \n";
cout<<" short \t -32768 to 32767 \n";
cout<<" int \t system dependent \n";
cout<<" long \t -2,147,483,648 to -2,147,483,647 \n";
repchar('#',60);
return 0;
}
void repchar( char ch,int n)
{
for(int i=1;i<=n;i++)
    cout<<ch;
cout<<"\n\n";
}

