#include<iostream>
using namespace std;
int main()
{   int x=5; 
    int i=5;
    i=i+1;
    //same thing
    i++; 
    i+=1;
    cout<<"\n value of i"<<i<<endl;
    //pre increment
    int y=++x;
    cout<<"the value of y is "<<y;
    y=x++;
   cout<<" the changing value of y is"<<y;
int k=1;
      //post increament
      int j=2*  k++ +2 * k++;
      cout<<" "<<"value of j is " <<j;
int l=2;
int z=l++;
cout<<"\n the vlue of l is "<<l<<endl;
cout<<"the value of z"<<" "<<z<<endl;
cout<<z;


        return 0;



}