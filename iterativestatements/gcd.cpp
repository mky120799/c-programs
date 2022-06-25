#include<iostream>
using namespace std;
int main()
{ 
    int m,n;
    cout<<"enter the two no.s"<<endl;
    cin>>m>>n;  
    do
{
    if(m>n)
        {
        m=m-n;
        }
    else n=n-m;
}while(m!=n);
cout<<"hence the :GCD is "<<"  "<<m<<endl;
return 0;

}



