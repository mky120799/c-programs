#include<iostream>
using namespace std;
int divide(int a,int b)
{
    if (b==0)
    throw 1;
    else
    return (a/b);
}
int main()
{
int a=10,b=2;
try
    {
   int  z=divide(a,b);
    cout<<z;

    }
    
    catch(int i)
    {
    cout<<"division by zero"<<i<<endl;
    }
return 0;
}
