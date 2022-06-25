#include<iostream>
using namespace std;
class rectangle
{
    int length;
    int breadth;
public :
rectangle(int l,int b );
rectangle(rectangle &r);


void setlength(int l);
void setlength(int b);
int getlength(){return length;}
int getbreadth(){return breadth}
//facilitator
int area();
int perimeter();
bool issquare();
~rectangle();
};

class cuboid : public rectangle{
    int height;
    public:
    cuboid(int h)
    {
        height=h;
    }
    int getheight(){return height;}
    void setheight(int h)
    {
        height=h;

    }
    int volume()
    {
        return getlength()*getbreadth()*height;

    }
};
cuboid c(5);
c.setlength(10);
c.setbreadth(7);
cout<<"volume is"<<c.volume()<<endl;
};
int rectangle::rectangle()
{
    length=l;
    breadth=b;


}
rectangle::rectangle(int l,int b)
{
    length=l;
    breadth=b;

}
rectangle::rectangle(rectangle &r)
{
    length=r.length;
    breadth=r.breadth;

}
void rectangle ::setlength(int l)
{
    length=l;

}
void rectangle ::setbreadth (int b)

{
    breadth=b; 
}
int rectangle::area()
{
    return length *breadth;

}
int rectangle ::perimeter()
{
    return  2*(length+breadth);
}
bool rectangle::issquare ()
{
    return length==breadth;
}
rectangle::~rectangle()
    {
        cout<<"rectangle destroy";
    }





