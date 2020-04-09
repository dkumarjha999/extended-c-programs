#include<iostream>
using namespace std;
class date
{
private: int d,m,y;
public: 
void getdate()
{int day,mon,yr;
cout<<" enter day month and year \n";
cin>>day>>mon>>yr;
d=day;
m=mon;
y=yr;
}
void show()
{
cout<<" entered date is= "<<d<<"/"<<m<<"/"<<y<<"\n\n";
}
};
int main()
{
date d1;
d1.getdate();
d1.show();
return 0;
}
