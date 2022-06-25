#include<iostream>
using namespace std;
class complex
{
private :
int real;
int img;
public :
complex(int r=0,int i=0)
{
  real=r;
  img=i;
}
friend complex operator+(complex c1,complex c2 );
void showreal()
{
    cout<<real;

}
void showimg()
{
    cout<< img;
}

};
complex operator+(complex c1,complex c2 )
{
    complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}
int main()
{
    complex c1(1,2);
    complex c2(2,3);
    complex c3=c1+c2;
    c3.showreal();
    cout<<endl;
    c3.showimg();
    return 0;

   


}
