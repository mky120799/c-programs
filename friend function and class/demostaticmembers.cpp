#include<iostream>
using namespace std;
class test
{
    public :
    int a;
    static int count ;
    test ()
    {
        a=10;
        count ++;

    }
    static int getcount()
    {
    
        return count;
    }
};
int test::count=0;

int main()

{
    test t1;
    cout<<t1.count<<endl;
    test t2;
  
    cout<<t2.count<<endl;
    t1.count =25;
    cout<<t2.count<<endl;
    cout<<test::count<<endl;
    cout<<test::getcount;
    cout<<t1.getcount<<endl;
    

}