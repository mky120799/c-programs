#include<iostream>
using namespace std;
template<class t>
class stack
{
    private :
    t *stk;
    int size;
      t top;
    public :
    stack(int sz)
    { 
    size=sz;
    top=-1;
    stk=new t [size];
    }
    t push(t x);
    t  pop();

};
template <class t>
t stack<t>::push(t x)
{
    if(top==size-1)
    cout<<"stack is full";
    else{
        top++;
        stk[top]=x;
        }
}
template<class t>
t stack<t>::pop()
{
    t x=0;
    if(top==-1)
cout<<"stack is empty"<<endl;
else{
    x=stk[top];
    top--;}
    return x;
}

int main()
{
stack<int> s(1);
s.push(10);
s.push(2);
s.push(3);
return 0;

}




