#include<iostream>
using namespace std;
int main()
{   int d;int m;int rev=0;int n;int b;

    cout<<"enter the no."<<endl;
    cin>>n;
    m=n;
    do
    {
       d=n%10;
       b&=d;
        cout<<"   ";
         switch(d)//with the help above code we can aslo print the digits in the form of letters
    {
        case 1:cout<<"one";
        break;
        case 2:cout<<"two";
        break;
        case 3:cout<<"three";
       break;
        case 4:cout<<"four";
        break;
        case 5:cout<<"five";
        break;
        case 6:cout<<"six";
        break;
         case 7:cout<<"seven";
         break;
          case 8:cout<<"eight";
          break;
           case 9:cout<<"nine";
           break;
            case 0:cout<<"zero";
            default: cout<<"you are giving a negative no or unknown";
    }
n=n/10;
        rev=rev*10+d;
    } while (n!=0);
    cout<<"\n reverse of the given no. is"<<" "<<rev<<endl;
    //along with this we can check whether the given no. is palindrom or not
    if(m==rev)
    cout<<"the given no is palindrom "<<endl;
    else cout<<"the no is not palindrom"<<endl;

   
return 0;

    }