
  /*  int a=4, b=5,temp;
    temp=a;
    cout<<"temp= "<<temp<<endl;
    
cout<<"value of a=  "<<a<<endl;


    a=b;
cout<<"value of a= "<<a<<endl;
cout<<"value of b= "<<b<<endl;
    b=temp;
cout<<"value of b"<<b<<endl;
cout<<"value of temp"<<temp<<endl;
    return 0;

int top=-1;
int stk[]={0,1,2,3,4,5};
for (;top<4;top++)
{
    cout<<stk[top]<<",";

}
cout<<"value of top"<<top<<endl;
         
return 0;

*/
#include<iostream>
using namespace std;
int main()
{
    int x=0;
    int top=-1;
int stk[]={0,1,2,3,4,5};
for (;top<4;top++)
{
    cout<<stk[top]<<",";
    

}
cout<<"\n position of top  "<<top<<endl;
for(;top>-1;)
{
x=stk[top];
 top--;
 cout<<"the values taken into the x is " <<x<<endl;
}
cout<<"now we are checking whether after giving values to the x  "<< endl;
cout<<"after decrementing the the top are there still the elements in the stack "<<endl;
cout<<"accessing the value at position two "<< stk[2]<<endl;
cout<<"the value of top right now "<<top<<endl;

return 0;



}
}