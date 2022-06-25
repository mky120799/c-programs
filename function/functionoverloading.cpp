#include<iostream>
using namespace std;


    int add(int x,int y)
    {
        int z=x+y;
        return z;
    }
    int add(int x,int y,int z)
    {
        int w=x+y+z;
        return w;
    }
    float add(float x,float y)
    {
        float z=x+y;
        return z;
    }
    int main()
    {  int c=2,a=3,b=2;
        int d=add( a, b);
        cout<<d<<endl;
      d=add(a,b,c);
    cout<<d<<endl;
   float x=2.4f,y=5.6f;
    float k ;
    k=add(x,y);
    cout<<k<<endl;
    return 0;


 }
 