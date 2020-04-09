#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<fstream>
#include<ncurses.h>
using namespace std;
char un[20];
class Admin
{
char name[20];
int totsub;
char subject[10][10];
char mobile[15],mail[50],fname[20];
char passwd[20],rpasswd[20];
public:
char rollno[15]; //student data entry from admin

void getdata()
{

cout<<"\n Enter student name : ";
gets(name);
cout<<"\nEnter student ID \ roll No. : ";
gets(rollno);
cout<<"\n Enter Student Father's Name : ";
gets(fname);
cout<<"\n Enter Mobile No. : ";
gets(mobile);
cout<<"\n Enter E-mail ID : ";
gets(mail);
cout<<"\n Enter total subject : ";
cin>>totsub;
for(int i=0;i<totsub;i++)
{
cout<<"\n Enter subject "<<i+1<<" Name : ";

cin>>subject[i];

}
cout<<"\nEnter Your Login Password : (No space allowed) ";
cin>>passwd;
cout<<"\nEnter Unique Keyword To Recover Your Password : (No space allowed) ";
cin>>rpasswd;
cout<<" \n\n PLEASE Note Your Username Is Your ID/ROLL NO. \n\n";

}


int login()
{
if((strcmp(::un,rollno))==0)
{
cout<<"\n Enter the Login Password : ";
int len=0;
cin>>passwd;
len=strlen(passwd);
char inputpasswd[20];
int i;
for(i=0;i<len;i++)
{
inputpasswd[i]=getch();
cout<<"#";
}
inputpasswd[i]=NULL;
cout<<"\nEntered Password is : "<<inputpasswd;
if((strcmp(::un,rollno))==0&&(strcmp(passwd,inputpasswd)==0))
{return 1;}
else
{return 0;}

}
else
{return 0;}

}

int recover()
{
//cout<<"\n Enter Your Username : "<<::un;
char key[20];
if(strcmp(::un,rollno)==0)
{
cout<<"\nEnter the Unique Password (provided by admin) : ";
cin>>key;
if(strcmp(key,rpasswd)==0)
{
cout<<"\nYou Are a Valid User. ";
cout<<"\n Your Password Is :"<<passwd;
cout<<"PLEASE exit To Login Again ";
return 1;

}
else
 {return 0;}
}

else 
{return 0;}

}
int faprofile()
{
if(strcmp(::un,rollno)==0)
{
cout<<"\n Faculty Name \t : "<<name;
cout<<"\n Faculty Father's Name \t : "<<fname;
cout<<"\n Faculty Mobile No. \t : "<<mobile;
cout<<"\n Faculty E-mail ID \t : "<<mail;
return 1;
}
else
{return 0;}
}



};

int main()
{
int x;
Admin a;
x=a.login();
a.getdata();
a.recover();
a.faprofile();
return 0;
}




