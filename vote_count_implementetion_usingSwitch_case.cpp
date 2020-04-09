#include<iostream>
using namespace std;
int main()
{
int ch,n;
int a[5]={0,0,0,0,0};
cout<<" enter number of voters\n";
cin>>n;
do{
 cout<<" enter your vote \n 1 for first cand\n 2 for second can\n 3 for third can \n 4 for fourth can \n 5 for fifth can\n"<<" enter your choice \n";
cin>>ch;
switch(ch)
{
case 1:{a[0]+=1;}break;
case 2:{a[1]+=1;}break;
case 3:{a[2]+=1;}break;
case 4:{a[3]+=1;}break;
case 5:{a[4]+=1;}break;
default :cout<<" invalid choice\n";
}
n--;
}

while(n>0);

cout<<" number of voves given for first,second, third , fourth and fifth candidate = \n";
for(int i=0;i<5;i++)
cout<<a[i]<<"\t";

cout<<"\n\n";
return 0;
}
