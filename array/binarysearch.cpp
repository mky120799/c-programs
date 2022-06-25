#include<iostream>
using namespace std;
int main()
{   int  arr[10]={12,34,23,34,4,4,4,6,345,34};
    int l=0 ;int h=9;int mid=0;int key;
   
   cout <<"enter the element to  be found"<<endl;
   cin>>key;
   
   while(l<=h)
 {   
    mid=(l+h)/2;
    if(key==arr[mid]) 
    {
        cout<<"elememt foud at position"<<mid;
        return 0;
    }   
    else if(key<arr[mid]) h=mid-1;
    else l=mid+1;

  };

}




   


   
   

   
