#include<iostream>
#include <memory>
using namespace std;
class rectangle
{
    private:
    int length ;
    int breadth;
    public:
    rectangle(int l,int b)
    {
        length =l;
        breadth =b;
    }
int area()
{
  return  length *breadth;
}

};
int main()
{
    shared_ptr<rectangle> ptr(new rectangle(10,5));
cout<<ptr->area()<<endl;
shared_ptr<rectangle>ptr2;
ptr2=move(ptr);
cout<<"ptr2->"<<ptr2->area();
cout<<"ptr->"<<ptr->area();
cout<<ptr.use_count()<<endl;

return 0;



}
