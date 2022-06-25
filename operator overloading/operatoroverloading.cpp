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
   int getreal()
   {
       return real;
   }   
   int getimg()
   { 
       return imaginary;

   }   

};
int main()
{
    complex c1;
    complex c2(2,4);
    complex c3(10,2);
    complex c4=c2.add(c3);
   // cout<<c4.real<<"+i"<<c4.imaginary;///shayad yha iss liye real and imaginary pr eror dikha rha hai kyoki these are not accessible by the objects */
    cout<<c4.getreal()<<"+i"<<c4.getimg();

    return 0;


}