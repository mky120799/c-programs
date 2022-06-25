#include<iostream>
using namespace std;
int main()
{   
    int a[2][3];
    for(auto &x: a)
    {
        for(auto &y :x)
        { cout<<"enter the vlue of matrix"<<endl;
            cin>>y;
            
        }
        cout<<endl;
    }

cout<<"hence the matrix"<<endl;
     for(auto &x: a)
    {
        for(auto &y :x)
        {
            cout<<y;
            
        }
        cout<<endl;
    }
    
    return 0;

}