#include<iostream>
using  namespace std;
int g;
void fun()
{    int a,b=15;
   cout<<  g+b<<endl;

}

int main()
{
    g=15;
    fun();
    g++;
    cout<<g;


}