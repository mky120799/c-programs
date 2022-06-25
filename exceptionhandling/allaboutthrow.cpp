#include<iostream>
using namespace std;
 class myexecption:public exception
{ 
   
};
int  division(int a,int b)throw( int )
{
    if(b==0)
    throw  10;
    return a/b;
}
int main()
{
    int x=10,y=0,z;
    try
    {
        if(y==0)
        {
            throw myexecption();
        }
          z=division(x,y);
          cout<<"we got result of division"<<z<<endl;
        }
        catch(myexecption e)
        {
            cout<<"division by zero"<<endl;
        }
        cout<<"bye"<<endl;
}

