#include<iostream>
using namespace std;
int main()
{   int n;
cout<<"enter the no. to find the factorial"<<endl; 
cin>>n;

    for(int i=1;i<= n;i++)
    {   
        if(n%i==0)
        cout<<i<<" "<<"is the factor of"<<n<<endl;
    }
return 0;
}