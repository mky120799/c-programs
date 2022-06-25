#include<iostream>

using namespace std;
template<typename T>
void fun(T p)
{
  p();
}
int main()
{
 //   [](){cout<<"hello"<<endl;}();
 // cout<<  ([](int x,int y){return x+y;}(10,10));
 //  int a=[](int x,int y)->{return x+y;}(10,30);
  // cout<<a;

int a=10;
auto f=[&a](){cout<<a++<<endl;};
fun(f);
fun (f);


}