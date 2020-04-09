#include<iostream>
#include<string.h>    // for using strlen fun use string.h
using namespace std;

int main()
{
char name[50];
cout<<" enter a name \n";
cin>>name;

int n=strlen(name);

cout<<" length = "<<n<<"\n\n";

return 0;
}

