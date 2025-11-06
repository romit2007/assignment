#include<iostream>
using namespace std;
class person
{
    protected:
    string name;
    int id;

    public:
    void detail(string n,int i)
    {
        name=n;
        id=i;
    }

    void showdetail()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"id: "<<id<<endl;
    }
};
class student : public person
{
    protected:
    string name;
    int id;
    string branch;

    public:
    void studentdetail(string n,int i,string b)
    {
        name=n;
        id=i;
        branch=b;
    }

    void showstudentdetail()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"id: "<<id<<endl;
        cout<<"branch: "<<branch<<endl;
    }

};
class teacher : public person
{
private:
    string subject;
    int salary;

public:
    void teacherdetail(string n, int i, string s, int sal)
    {
        detail(n,i);
        subject = s;
        salary = sal;
    }

    void showteacherdetail()
    {
        
        showdetail();
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main()
{
    student s;
    teacher t;

    s.studentdetail("Romit",52,"information technology");
    t.teacherdetail("Meet dave",102,"cybersecurity",150000);

    
    s.showstudentdetail();
    cout << endl;
    t.showteacherdetail();

}