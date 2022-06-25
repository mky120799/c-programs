#include<iostream >
using namespace std;

template<class x>
auto add(x a,x b)
{
    t z=a+b;
    return z;
}
int main()
{
    auto z=add(4,5);
    cout<<"hence the sum is "<<z<<endl;
    return 0;
}