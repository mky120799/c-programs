#include<iostream>
#include<fstream>
using namespace std;
int main()
{/*
ifstream ifs("my.txt");
string name;
int roll;
string branch;
ifs.close();
cout<<"name"<<name<<endl;
cout<<"roll"<<roll<<endl;

cout<<"branch"<<branch<<endl;
*/
ifstream ifs("my.txt");
if(ifs.is_open())
cout<<"file is open"<<endl;
string name ;
int rollno;
string branch;
ifs>>name;
ifs>>rollno;
ifs>>branch;

if(ifs.eof())
cout<<"we reached to the end of file"<<endl;
else
cout<<"file is still continuing"<<endl;
cout<<name<<endl;
cout<<rollno<<endl;
cout<<branch<<endl;
ifs.close();
}


