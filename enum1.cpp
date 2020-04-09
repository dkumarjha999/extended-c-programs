#include<iostream>
using namespace std;
enum grade {labour,seceretary,manager,accountant,researcher};
int main()
{
grade g;
char c;
cout<<" enter first word to check corresponding word "<<"\n";
cin>>c;
switch(c)
{
case 'l':cout<<" labour "<<"\n";break;
case 's':cout<<" secretary "<<"\n";break;
case 'm':cout<<" manager "<<"\n";break;
case 'a':cout<<" accountant "<<"\n";break;
case 'r':cout<<" researcher "<<"\n";break;
default: cout<<"no word in enum data library with this name "<<"\n";
}
return 0;
}


