#include<iostream>
using namespace std;
class base
{ 
public:
base()
{
    cout<<"default/non constructor"<<endl;
}
base(int x)
{
    cout<<"param constructor"<<x<<endl;
}
};
class derived: public base
{ 
  public:  
    derived()
{
    cout<<"default/non of derived"<<endl;

}
derived(int a)
{   
    cout<<"param constructor of derived"<<endl<<a;

}
derived(int x,int y):base(x)
{
    cout<<"param of derived"<<y<<endl;
}

};
int main()
{
derived d(10,12);
}
