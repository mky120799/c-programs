#include<iostream>
using namespace std;
class parents
{
    private : 
    int a;
    protected:
    int b;
    public:
    int c;

void funparents()
  {
    a=10;
    b=5;
    c=15;
  }
};
class child: parents//If you do not choose an inheritance type, C++ defaults to private inheritance (just like members default to private access if you do not specify otherwise). 
{
    public:
    protected:
    //base class ka pubic aur protected member protectd bn jata hai
    void funchild()
    {
     //  a=10;
        b=5;
        c=15;
    }

};
class grandchild :public child
{  void fungrandchild()

  { // a=10;
     b=5;
     c=20;
  }

};
int main()
{
    child c;
    c.a=10;
    c.b=5;
    c.c=20;
}
