#include<iostream>
using namespace std;
int main()
{  int a=5;//& wala khela hmko poora maloom krna hai
/*   int *p;
 p=&a;
 cout<<"now P should give addrress of A"<<"  "<<p;
 cout<<"\n what should be the value of &a "<<"  "<<&a;
 cout<<"\n  what should be the value of *p" <<"  "<<*p; */
int x;
x&= a;
cout<<"\n"<<x++;
cout<<"now  the vlaue of #a should remain same i.e, 5 "<<"  "<<a<<endl;
cout<<"now we are checking whether after the assignement operator"<<endl;
cout<<"does this copies the values or give the referenceto #x?"<<endl;
cout<<"after ++x  we know that value of #x will increment "<<endl;
cout<<"but we want to know that whether the vlaue of #a also increment or not"<<endl;
cout<<"so the value of #a is"<<"  "<<a<<endl;
cout<<"and the value of #x"<<"  "<<x;







     
    
    
    /*
    int a=5,b=10,temp;
    a=b;
    cout<<"the value of a is "<<endl<<a<<endl;
    cout<<"now the vlaue of a gets earased and now it holds the value b"<<endl;
    cout<<"checking the value of b now"<<endl<<b;
*/

/*
    cout<<"temp right now should contain garbage vlue"<<endl;
    cout<<temp<<endl;
    cout<<"now assigning value of a into temp"<<endl;
    temp=a;
    cout<<"now the value of temp will be"<<" "<<temp<<endl;
    cout<<"now a should get empty"<<endl;
    cout<<a;
    */
    return 0;
}