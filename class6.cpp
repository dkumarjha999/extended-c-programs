#include<iostream>
using namespace std;
class counter
{
int count;                     //constructor is such function which have same name of function as that of class name 
public:counter()
    {count=0;}
void increasecount()
    {count++;}
   int getcount()
      {return count;}
};
int main()
{
counter c1,c2;
cout<<"\ncounter value ="<<c1.getcount();
cout<<"\ncounter value ="<<c2.getcount();
c1.increasecount();
c2.increasecount();
c2.increasecount();
c2.increasecount();

cout<<"\ncounter value ="<<c1.getcount();
cout<<"\ncounter value ="<<c2.getcount();
return 0;
}

