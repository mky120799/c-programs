#include<iostream>
using namespace std;
int main()
{
    int arr[]={23,34,56,78,56};
   int vrr[2]={1,5};
    int n=17;
    int hrr[17]={323,54,34,54,32,4,43,4,54,3,45,66,4};
    for(int i=0;i<=17;i++)
    {
        cout<<i<<"   "<<vrr[i]<<","<<endl;
    }//yha pr hm log kee agr extra space aur vo uninnitialised hai to 
    //agr hm usko access kr ne kee soch rhe hain to ya agr print krwayen to 0
 return 0;
}