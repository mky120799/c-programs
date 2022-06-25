#include<iostream>
using namespace std;
class demo 
{
    public:
    demo()
    {
       cout<<"constructor of demo"<<endl;

    }
    ~demo()
    {
        cout<<"destructor of demo"<<endl;


    }
};
int main()
{
demo d();
}
