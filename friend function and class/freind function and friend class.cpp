#include<iostream>
using namespace std;
//in case of friend function 
/*class base
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    friend  void fun();
};
void fun()
{
    base b;
    b.a=10;
    b.b=12;
    b.c=9;
}*/
class your;
class my
{
private :
int a;
protected: 
int b;
public:
int c;
friend your;
};
class your
{
    public : 
    my m;
    void fun()
    {
        m.a=10;
        m.b=12;
        m.c=5;

    }
};

int main()
{
    
}