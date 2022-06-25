#include<iostream>
using namespace std;
int main()

{
    int a=10,b=2;
    try{
        if(b==0)
        throw b;
        int c=a/b;
        cout<<c;


    }
    catch(int e)
    {
        cout<<"division by zero is not possible"<<e;

    }
    cout<<"bye";
    return 0;

    }

