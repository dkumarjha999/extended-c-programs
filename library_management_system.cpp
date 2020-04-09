#include<iostream>
using namespace std;

class book
{
protected:
char name[50];
int no;
public:
 virtual void getdata()
{
cout<<" enter book name and serial number\n";
cin>>name>>no;
}

void putdata()
{
cout<<" book name = "<<name<<"\n book number = "<<no<<"\n\n";
}

};

class auth
{
protected:
char aname[50], publ[50];
public:
virtual void getdata()
{
cout<<" enter author name , publisher name\n";
cin>>aname>>publ;
}

void putdetail()
{
cout<<" author name = "<<aname<<"\n publisher = "<<publ<<"\n\n";
}
};

class finals:public book, public auth
{
protected:
int yr,nop;
float cst;
public:
void getdetail()
{
cout<<" enter number of pages, cost and year of publication\n";
cin>>nop>>cst>>yr;
}

void show()
{
cout<<" number of pages = "<<nop<<"\n cost = "<<cst<<"\n publication year = "<<yr<<"\n\n";
}
};

int main()
{int x;
cout<<" enter number of book\n";
cin>>x;
finals ft[x] ,*f1,*f2,*f3;
book b[x];
auth a[x];
f1=ft;
f2=a;
f3=b;
for(int i=0;i<x;i++)
{f1->getdetail();
f2->getdata();
f3->getdata();
}
cout<<" enter 1 for book of same author name\n 2 for total cost of all book\n enter your choice\n";
int ch;
cin>>ch;
switch(ch)
{
case 1:
{
for(int i=0;i<x;i++)
{
for(int j=0;j<x;j++)
{ 
if(a[i].name==a[i+1].name)
}
a[i].putdata();
b[i].putdetail();
ft[i].show();
}
}break;
case 2:
{



