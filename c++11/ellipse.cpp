#include<iostream>
#include<stdio.h>
#include <stdarg.h>
using namespace std;

int sum(int n,...)
{
    va_list list;
    va_start(list,n);
    int a,s=0;
    for(int i ;i<n;i++)
   { 
    a=va_arg(list,int);
    s+=a;
   }
    cout<<s;
   }

    




 
    int main()
{
    int z=sum(2,3,4);
    cout<<z<<endl;
    return 0;
    
}