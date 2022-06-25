#include<iostream>
using namespace std;
class parent 
{private:
  virtual void show() final
   {

   } 
};
class child:parent
{
    void show()
    {
      cout<<"show of child"<<endl;
    }
};
int main()
{

}