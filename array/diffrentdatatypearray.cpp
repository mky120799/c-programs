#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,4,345,65,3554,3,45,4,};
    char brr[]={'a','b','t','g','s','z'};
    float crr[]={23.44,4,5,6.56456789,78.43};
   long double drr[]={56.5564554333,45.3333,0.89778,34.23343};
    for(int x : arr)
    { //this will print arays 
        cout<<x<<"  "<<arr[x]<<endl;
    }
   /* for(int i =1;i<=10;i++)
    {
        cout<<i<<"  "<<drr[i]<<endl;
    }*/
    return 0;
    
}