#include<iostream>
using namespace std;

class item
{
private: int p,cd[100];
float rs[100];
char name[50];
public:
void getdata()
{
p++;
cout<<" enter item name and code number , price of each\n";
cin>>name>>cd[p]>>rs[p];

}

void show()
{
for(int i=1;i<=p;i++)
{

cout<<" item name = "<<name<<"\n code number = "<<cd[i]<<"\n price = "<<rs[i]<<"\n\n";

}

}

void total()
{
float ttl;
for(int i=1;i<=p;i++)
{
ttl+=rs[p];
}
cout<<" total money  to pay = "<<ttl<<"\n\n";
}

void remove()
{
int code;
cout<<" enter item code to remove\n";
cin>>code;
for(int i=1;i<=p;i++)
{
if(code==cd[p])
{
rs[i]=0;
}

}
}

};

int main()
{
int ch;
item x;
do
{
cout<<"enter 1 for adding item\n 2 for showing all items detail\n 3 for total rupees to pay\n 4 for removing an item\n enter your choice\n";
cin>>ch;
switch(ch)
{
case 1:{x.getdata();}break;
case 2:{x.show();}break;
case 3:{x.total();}break;
case 4:{x.remove();}break;
default:{cout<<"invalid choice\n";}
}
}
while(ch<5);

return 0;
}
