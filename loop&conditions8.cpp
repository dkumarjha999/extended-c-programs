#include<iostream>
using namespace std;
int main()
{
int no,n;
cout<<" enter numbar of rows "<<"\n";
cin>>no;
n=no;
int t=1;
for(int r=1;r<=no;r++) // this for loop used for controling rows and for next line as use \n
{ 

for(int sp=1;sp<=n;sp++)  // this for loop used for controling void spaces in all lines
  { cout<<" ";}
 n--;
for(int val=1;val<=r;val++)  // this for loop is used for printing patern value also with value we have given a space here too with "t "after *
{cout<<t<<" ";t++;}
cout<<"\n";     // for changing line  
}
return 0;
}  
