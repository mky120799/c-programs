#include<iostream>
using namespace std;
int main()
{int i=1,r1=10,r2=10,c1=10,c2=10,r3=10,c3=10;
int mult[r3][c3],A[r1][c2],B[r2][r2];

    cout<<"enter the no. row and column of first matrix"<<endl;
    cin>>r1>>c1;
    cout<<"enter the no. row and column of second matrix"<<endl;
    cin>>r2>>c2;
    
    if(c1!=r2)

    {
        cout<<"multiplication cant be done"<<endl;
    }
    
    cout<<"enter the first matrix"<<endl;
    for(auto& x:A)
    {
        for(auto &y:x)
        { 
        cout<<"enter the "<<i++<<"th"<<"  "<<"value of matrix"<<endl;
         cin>>y;
        }

    }
    cout<<"enter the second matrix"<<endl;
    for(auto& x:B)
    {
        for(auto &y:x)
        { 
        cout<<"enter the "<<i<<"th vlaue of second matrix"<<endl;
         cin>>y;
         }
    }
    //now matrix mult
     mult[r3][c3]=A[r1][c1]*B[r2][c2];
    for(auto &x:mult)
    {
        for(auto &y:x)
      {  cout<<y<<" ";
      }
    }
    cout<<endl;

return 0;
 
}