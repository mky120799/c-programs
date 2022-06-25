#include<iostream>
using namespace std;
int main()
{
    /*
in c++ every statment is an expression where an operator is present*/
/*here we will write an expression for distance in the physics*/
int u,v,a,s;
cout<<"\n enter the initial speed" ;
cin>>u;
cout<<"\n enter the final speed " ;
cin>>v;
cout<<"\n enter the acceleration";
cin>>a;
cout<<"\n hence the distance is" ;
s=((v*v)-(u*u))/(2*a);
cout<<s;
return 0;


}