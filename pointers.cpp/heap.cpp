#include<iostream>
using namespace std;
int main()
{
    char *p=new char [10];
    p[3]='4';
    /*cout<<p[3];*/
    cout<<sizeof(p)<<endl;
    cout<<p[3];
    delete []p;
    p=NULL;
cout<<p[3];
cout<<"heap memory delete ho chuki hai"; 



    return 0;


}