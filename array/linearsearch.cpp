#include<iostream>
using namespace std;
int main()
{    int n=6;int arr[n]; 
    int y,i;
    cout<<"enter the elements one by one "<<endl;
    for(int i=0; i<n;++i)
   {   cout<<"enter the "<<i+1<<"th element"<<"    ";
   cin>>arr[i];
   }
    cout<<"enter the element which is to find"<<endl;
    cin>>y;
    
    for(i=0;i<n;i++)
   {  
        if(arr[i]==y)
      {
    cout<<"element found at the "<<i+1<<"th place";
    return 0;
      }

    }
    cout<<"element not found";
return 0;
}
    