#include <iostream>
using namespace std;

 /*  int const x =10;
  x++;
  int x=20;
  const int *const  ptr= & x ;
  ++*ptr;
  int y=10;
  ptr =&y;

  cout<<*ptr<<" "<<x<<endl; */
class checking
{
 public:
    int a=10;int b=5;
    


  void fun(a ++,b) const 
  {
      a  ++;
      cout<<"value of x"<<a<< "  "<<"y"<<b<<endl;
  }
   
};
int main()
{
    checking c;
    c.fun();
}

