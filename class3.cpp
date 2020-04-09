#include<graphics>
class circle
{
private: float xco,yco,rad;
    color fillcolor;
fstyle fillstyle;
public:
void set(float x,float y,float r,color fc,fstyle fs)
{ xco=x;
yco=y;
rad=r;
fillcolor=fc;
fillstyle=fs;
}
void draw()
{ 
set_color(fillcolor);
set_fill_style(fillstyle);
draw_circle(xco,yco,rad);
}
};
int main()
{
init_graphics();
circle c1,c2;
c1.set(2,3,5,cBLUE,O_fill);
c2.set(5,2,4,cRED,x_fill)
return 0;
}
