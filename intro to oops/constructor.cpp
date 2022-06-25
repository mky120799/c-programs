#include<iostream>
using namespace std;


#include<iostream>
using namespace std;
class rectangle
{
    private :

    int length;
    int breadth;
   
    public:

    rectangle(rectangle &r )
{
    length=r.length;
    breadth=r.breadth;
}
   /* rectangle()
        {
            length=1;
            breadth=1;


        }
    */
    rectangle(int l=1,int b=1)
    {
       setlength(l);
        setbreadth(b);
    }
    void setlength(int l)
    {  if(l>0)
        length= l;
        else
        length=0;

    }
    void setbreadth(int b)
    {  if(b>0)
        breadth=b;
        else
        breadth=0;

    }


    int area()
    { 
    return (length*breadth );
    }
   int  perimeter()
   { 
   
    return 2*(length +breadth);
    
    }
};
int main()
{rectangle r;
/*rectangle r1(10,5);*/
rectangle r2(r);//copy constructor
//this is passing the an previous object 
//as argument and to the argument constructor


/*rectangle *ptr;
ptr=&r1;
ptr->length=10;
ptr->breadth=20;
cout<<ptr->area();*/
cout<<r.area()<<endl;
return 0;

}