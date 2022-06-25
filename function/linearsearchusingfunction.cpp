#include<iostream>
using namespace std;
int search(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    
        if(key==a[i])
        
            
        return i+1;
    
}
int main()
{int k,n;
    int a[]={2,3,4,5,6,7,8,9};
    cout<<"enter the key"<<endl;
    cin>>k;
    int index=search(a,n,k);
    cout<<"hence the position is"<<endl;
    
    cout<<index<<endl;
return 0;

}