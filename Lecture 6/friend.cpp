#include<bits/stdc++.h>
using namespace std;

class student
{
    
    string passcode;
    friend class bestfriend;

    protected:
    int age;

    public:
    string name;
    int id;

    void info()
    {
        cout<< "My name is "<<name<<" , my id is "<<id<<" passcode is "<<passcode<<endl;

    }
    void setpass(string s, int a)
    {
        passcode=s;
        age=a;
    }
    friend void hacker(student s);
   
};

void hacker(student s)
{
    cout<<s.passcode<<" "<<s.age<<endl;
}
class bestfriend{

    public:

    void sharingsceret(student s)
    {
        cout<<s.passcode<<" "<<s.age<<endl;
    }
};

int main()
{
    student s1;
    s1.setpass("0001",10);

    bestfriend bff;
    bff.sharingsceret(s1);
    return 0;
}