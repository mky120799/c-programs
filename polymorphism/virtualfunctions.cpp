#include<iostream>
using namespace std;
class base
{
public:
virtual int fun()
    {
     cout<<"fun of base"<<endl;   
    }
    
};
class derived: public base
{
int fun()
{
    cout<<"fun of derived"<<endl;
}


};
int main()
{
base *ptr;
derived d;
ptr= & d;
ptr->fun();

}