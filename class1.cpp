#include<iostream>
using namespace std;       // shorting using class
class first
{ 
private: int num[10];
public: void getval()
{
int a[10];
 cout<<" enter 10 numbers \n";    // taking values by using this function and inputting in obj num array
 for (int i=0;i<10;i++)
{ 
 cin>>a[i];
num[i]=a[i];
}
}
void showval()
{ int t;
cout<<" values are \n";     // showing inputted value
for(int i=0;i<10;i++)
  cout<<num[i]<<"\t";


for(int i=0;i<10;i++)       // this for loops used for shorting 
   {
     for(int i=0;i<9;i++)
    {
       if (num[i+1]<num[i])
         { t=num[i+1];
           num[i+1]=num[i];
	   num[i]=t;
		      }
	}
   }
cout<<" \t shorted values are \n";    // printing values after shorting 
for(int i=0;i<10;i++)
  cout<<num[i]<<"\t";
cout<<"\n";
}

};
int main()
{
first p;
p.getval();
p.showval();
return 0;
}


 	
