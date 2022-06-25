#include<iostream>
using namespace std;
class complex

{
    private:
   int  real;
   int  imaginary;
   public:
   complex(int r=0,int m=0)
   {
       real=r;
       imaginary=m;

   }
   complex add(complex x)
   {
       complex temp;
       temp.real=real + x.real;
       temp.imaginary=imaginary +x.imaginary;
       return temp;
   }


};
int main()
{
    complex c1;
    complex c2;
    complex c3(10,2);
    complex c4=c2.add(c3);
    cout<<c4.real<<"+i"<<c4.imaginary;
    return 0;


}
