#include<iostream>
using namespace std;
int main()
{
    int a[5]{2,4,6,8,10};
    int *p=a,*q=&a[4];
   /* cout<<*p<<endl;
    p++;//yha 2bytes age jayega
    cout<<*p<<endl; 
    p--;
    cout<<*p<<endl;*/
  /*  cout<<* p<<"     "<<*p<<endl;
    cout<<*(p+2 )  <<"  "<<*p<<endl;
/*
/*for(int i=0;i<5;i++)
{
    /*cout<<*(a+i)<<endl;*/
    cout<<p-q<<endl;
    cout<<*q;

    



    return 0;
}