#include<iostream>
using namespace std;
int main()
{
    /*int A[]={2,4,5,2,9,5};
    for(int x:A)
    {
        cout<<x<<endl;
        
    }
    float B[]={2.5f,5.6f,9,8,7};
    for(int x:B)
    cout<<x<<",";
    float x=5.66f;
    cout<<"this should convert to float type"<<x;*/
    float array[]={343,344.5f,'f',43,34,34};
    for(auto a: array)
    cout<<a<<endl;
    return 0;

    
    
}