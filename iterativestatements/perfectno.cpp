#include<iostream>
using namespace std;
int main()
{int sum=0, n;
    cout<<"enter the no."<<endl;
    cin>>n;
    for(int i ;i<=n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }

    }
    if(2*sum==n)
    {
        cout<<"perfect no."<<endl;
    }
    else
    {
        cout<<"not a perfect no."<<endl;
    }
    return 0;

}