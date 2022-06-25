#include<iostream>
using namespace std;
int main()
{
    int arr[2][3]={{23,34,23},{88,77}};
    int srr[2][3]={12,34,23,65,34,23};
    int sum[2][3];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum[i][j]=arr[i][j]+srr[i][j];
        
        }
        cout<<endl;
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<sum[i][j]<<"             ";
        } cout<<endl;
    }
return 0;

}