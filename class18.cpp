#include<iostream>
using namespace std;
class num
{ int n;
public:
void get(int no)
{
n=no;
}
void show()
{
int count;
 cout<<" total object created yet = "<<count<<"\n";
 cout<<" i am object number = "<<n<<"\n";
count++;
}
};
int main()
{
num n1,n2,n3;
n1.get(4);
n2.get(5);
n3.get(7);
n1.show();
n2.show();
n3.show();
return 0;
}

