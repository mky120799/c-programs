#include<iostream>
#include<fstream>
using namespace std;

class student
{
   public :
   string name;
   int rollno;
   string branch;
 friend ofstream &operator<<(ofstream &ofs,student &s1 );
 friend ifstream &operator>>(ofstream & ofs ,student &s1);
};
ofstream & operator <<(ofstream &ofs,student &s1)
{
    ofs<<s1.name;
    ofs<<s1.rollno;
    ofs<<s1.branch;
    return ofs;
}

ofstream & operator >>(ofstream &ofs,student& s1)
{
    ofs>>s1.name;
    ofs>>s1.rollno;
    ofs>>s1.branch;
    return ofs;
}
int main()
{
  student s1;
  s1.name="jhon";
  s1.rollno=10;s1.branch="cs";
  ofstream ofs("student.txt",ios::trunc);
 ofs<<s1;
 ofs>>s1;
 cout<<s1.name;
 cout<<s1.rollno;
 ofs.close();
}
 


