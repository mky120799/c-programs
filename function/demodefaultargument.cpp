#include<iostream>
using namespace std;
/*template <class T>*/
int max(int a=0,int b=0,int c )
{
    return a>b&&b<a?a:(b>c?b:c);
}


int main()
{
/*cout<<max()<<endl;*/
cout<<max(8)<<endl;
cout<<max(2,3)<<endl;
cout<<max(9,7,4)<<endl; 
return 0;

}