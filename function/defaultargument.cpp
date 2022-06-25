#include<iostream>
using namespace std;
template<class T>
T add(T a,T b,T c=0)
{
    T d=a+b+c;
    return d;
}
int main()
{ 
    cout<<add(2,5)<<endl;
    cout<<add(2,5,2)<<endl;
    cout<<add(2.450000001,3.5,0.0)<<endl;

}
