#include<iostream>
#include<set>
using namespace std;
int main()
{
set <int> v={2,2,3,4,6,8,10};
    v.insert(20);
    v.insert(30);
    cout<<"using itrator class"<<endl; 
set <int> :: iterator itr;
for(itr=v.begin();itr!=v.end();itr++)
{
    cout<<*itr <<endl;
}

cout<<"using for each loop"<<endl;

    for(int x:v)
    cout<<x<<endl;
    
}