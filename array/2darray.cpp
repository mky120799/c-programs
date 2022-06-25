#include<iostream>
using namespace std;
int main()
{//declaration
    int arr[2][3]={{9,4,3},{56,34,2}};
    int drr[3][4]={2,1,3,4,2,3,5,6,45,34,43,56};
    int rrr[3][4]={2,3};
    //for access
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<drr[i][j]<<"  ";
        }
        cout<<endl;

    }
return 0;
}



