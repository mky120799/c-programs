#include<iostream>
using namespace std;
int main()
{
    int n,d;
    cout<<"enter the no.";
    cin>>n;
    int m=n;
    int sum;
    do
    {
        d=n%10;
        n=n/10;
        sum=sum+d*d*d;
    } while (n!=0);
    if(sum==m)
    cout<<"hence this is an armstrong no";
    else
    cout<<"its not am armstrong no";
    return 0;

    }