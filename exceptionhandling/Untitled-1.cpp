#include<iostream>
using namespace std;
int main()
{try{
    int a,b;
    a=10;b=0;
    if(b==0)
    throw string("catch all will run");
    cout<<a/b;
    }
    catch(int e)
    {
        cout<<"int integer division by zero "<<e<<endl;

    } 
    catch (double d)
{
    cout<<"in division with zero is not allowed "<<d<<endl;
}
catch(...)
{
    cout<<"you are doing something wrong"<<endl;

}

}