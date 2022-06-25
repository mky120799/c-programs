#include<iostream>
using namespace std;

float add(float x,float y)
{
int z;
z=x+y;
return z;
}
int main()
{
    float x,y;
    cout<<"enter the two no."<<endl;
    cin>>x>>y;
float c = add(x,y);
  cout<<"value of the addtion"<<c;
return 0;
}