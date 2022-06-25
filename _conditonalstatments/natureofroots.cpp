#include<iostream>
using namespace std;
int main()
{   double a,b,c,d; 
    cout<<"enter the coefficients"<<endl;
    cin>>b>>a>>c;
    d=b*b-4*a*c;
    if(d==0) cout<<"roots are equal &real"<<endl;
    else if(d>0) cout<<"real and unequal"<<endl;
    else if(d<0) cout<<"roots are imaginary";
    return 0;

}