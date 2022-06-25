#include<iostream>
using namespace std;


 int & fun(int &  size)
    {
        return size;
    }
int main()
{
   /* int *p;*/
    int size=5;
  int  p=fun(size);
    cout<<p;
   /* for(int i=0;i<size;i++)
    cout<<p[i]<<endl;*/
    return 0;
}