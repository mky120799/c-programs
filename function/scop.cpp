#include<iostream>
using namespace std;
int y=12;
int x=13;
int main()
{
    int x=20;
    {
        int x=30;
        cout<<x<<endl;
    }
    cout<<x<<endl;
    cout<< y<<endl;
    cout<<::x<<endl;
    return 0;



}