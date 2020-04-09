#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int n;
float p=0,s=0,t=1.0;
cout<<" enter total numbe of term\n";
cin>>n;

for(int i=1;i<=n;i++)
{
p=pow((1/t),i);    // 1/i krne se nhi aayega because i int type hai and 1/i=0 for i>1
cout<<"    "<<p<<"\n";
s+=p;
t++;
}
cout<<" sum of term = "<<s<<"\n\n";
return 0;

}
