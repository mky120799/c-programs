#include<iostream>
using namespace std;
class base
{   public:
   virtual void fun1()=0;
    //{
      //  cout<<"this is the base class"<<endl;

   // }
    virtual void fun2()=0;
  //  {
    //    cout<<"this is second function of base"<<endl;
            
   // }
};

class derived: public base 
{
public:
void fun1()
{

cout<<"this is the derived class"<<endl;
}
void fun2()
{
cout<<"this is the second function of the derived class"<<endl;
}

};
int main()
{ 
  base  *b;
derived d;
b=&d;
b->fun2();
}