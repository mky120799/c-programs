#include<iostream>
using namespace std;
int main()
{  int a,b,c;
   cout<<" enter the three no.s"<<endl;
   cin>>a>>b>>c;
   if(a>b && a>c) cout<<a<<"   "<<"is the greatest no.";
   else if(b>c) cout<<b<<"  "<<"is the greatest no.";
   else cout<<c<<"is the greatest no.";
   return 0;


   
   
   
}