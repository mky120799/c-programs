#include<iostream>
using namespace std;

class base
{
public:
int fun()
{
    cout<<"function of base"<<endl;
}
};
class derived :public base
{
    public:
    int fun()
    {
        cout<<"funtion of derived ";
    }
};
int main()
{
derived d;
d.fun();


}