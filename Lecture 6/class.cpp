#include<bits/stdc++.h>
using namespace std;

class student
{
    
    string passcode;

    public:
    string name;
    int id;

    void info()
    {
        cout<< "My name is "<<name<<" , my id is "<<id<<" passcode is "<<passcode<<endl;

    }
    void setpass(string s)
    {
        passcode=s;
    }
};

int main()
{
    student s1;
    s1.name="Mohit";
    s1.id=1;
    s1.setpass("0001");
    s1.info();

    return 0;
}