#include<iostream>
using namespace std;
int main()
{
    double d=45.00006;
    char r=97;
    decltype(r) a=d+r;
    cout<<a<<endl;

}