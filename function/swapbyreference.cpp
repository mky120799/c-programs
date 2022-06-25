#include<iostream>
using namespace std;
template <class T>
int swap(int &a,int &b)
{
   int temp;
   temp=a;
   a=b;
   b=temp;
}
int main()
{ int a=2;
 int b=4;
 swap(a,b);


}