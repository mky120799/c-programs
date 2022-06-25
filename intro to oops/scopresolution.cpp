#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    rectangle();
    rectangle(int l,int b);
    rectangle(rectangle &r);
    int getlength();
    int getbreadth();
    int setlength();
    int setbreadth();
    int area();
    int perimeter();

    bool isSquare();
    ~rectangle();
};
rectangle::rectangle()
{
    length=1;
    breadth=1;

}
rectangle::rectangle(int l,int b)
{
    length =l;
    breadth=b;



}
rectangle::rectangle(rectangle &r)
{
    length=r.length;
    breadth=r.breadth;

}
int rectangle::getlength()
{
return length;


}
int rectangle::getbreadth();
{
 return breadth ;
}
int rectangle::setbreadth(int b)
{
    breadth=b;
    
}
int rectangle::setlength(int l)
{
    length =l;
}
int rectangle::area()
{
    return length*breadth;
}
int rectangle::perimeter()
{
    return 2*(length*breath);
    
}
bool rectangle::isSquare()
{
    
    return length*bredth;
    
}
rectangle ::~rectangle()
{
    cout<<"rectangle destroyed";
}
int main()
{
  rectangle r1(10,10);
  cout<<"area " <<r1.area()<<endl;
if(r1.isSquare())
cout<<"yes"<<endl;


}
 
