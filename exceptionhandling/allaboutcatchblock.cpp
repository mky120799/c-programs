#include<iostream>
using namespace std;

class myexception1 
{

};
class myexcetion2 :myexception1
{

};
int main()

{



try
{
        throw  myexcetion2 ();

}

    catch(myexcetion2 e)
    {
         cout<<"int catch"<<endl;
    }
    catch(myexception1 e)
    {
        cout<<"double catch"<<endl;

    }
    catch(...)
    {
        cout<<"all catch"<<endl;

} /*
    catch(...)
    {

    }*/

}