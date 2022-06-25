#include<iostream>
using namespace std;
int main()
{   int d;
    cout<<"enter the digit"<<endl;
    int n;
    cin>>n;
    do
    {
    d=n%10;
    cout<<d;
    n=n/10;
    } while (n>0);
    return 0;

}