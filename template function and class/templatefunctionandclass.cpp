#include<iostream>
using namespace std;
template<class T>
class stack
{
    private:
    int top;
    int size;
    T *stk;
    public:
    stack(int  sz)
    {
        size=sz;
        top=-1;
        stk= new T[size];
    }
    void push(T x);
    int pop();


};
template<class T>
void stack<T> :: push(T x)
{
if(top==size-1)
cout<<"stack is full"<<endl;
else{ 
    top++;
    stk[top]=x;
}
}
template <class T>
int stack<T> ::pop()
{
    T x=0;
    if(top==-1)
    cout<<"stack is empty"<<endl;
    else
       {
         x=stk[top];
         top--;
        }

     return x;
}

int main()
{
    stack<float> s(10);
    s.push(10);
   s.push(23);
    
}

