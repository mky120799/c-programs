#include<iostream>
using namespace std;
class rectangle
{ 
private:
    int length;
    int breadth;

public:
 rectangle(int length,int breadth)
     {
         this->length=length;
         this->breadth=breadth;


     }
}; 
int main()
{
    rectangle r(10,5);
    cout<<"program came to an end";
    return 0;


}