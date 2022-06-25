#include<iostream>
using namespace std;
int main()
{double basic,allowance,ded,netsal;

cout<<"Enter the basic salary";
cin>>basic;
cout<<"\n enter the percentage of allowance";
cin>>allowance;
cout<<"\n enter the percentage  of deduction";
cin>>ded;
cout<<"\n Hence the net salary is ";
netsal=basic+allowance*basic+ded*basic;
cout<<netsal;
return 0;
}

