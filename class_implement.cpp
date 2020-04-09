#include<iostream>
using namespace std;

class per
{
char name[50];
int age;
public:
void getdata();
void show();
};

void per::getdata()
{
cout<<" enter name , age \n";
cin>>name>>age;
}

void per::show()
{
cout<<"\n name = "<<name<<"\n age = "<<age<<"\n\n";
}

int main()
{
per p;
p.getdata();
p.show();

return 0;
}
