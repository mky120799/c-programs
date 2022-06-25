#include<iostream>
using namespace std;
int main()
{ 
    int n,count,i;
cout<<"enter the no."<<endl;
  cin>>n;
    for(i=1; i<=n;i++ )
    {
        if(n%i== 0)
        {
            count ++;
        }
    }
    if(count==2)
    {
        cout<<n<<" "<<"is a prime no."<<endl;
    }
    else
    {
        cout<<"not a prime no.";
    }
    return 0;
}
