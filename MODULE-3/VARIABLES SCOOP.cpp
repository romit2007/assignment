#include<iostream>
using namespace std;
class student
{
    public:
    int id1=0;
    string name="";

    student(int id,string name)
    {
        this->id1=id;
        this->name=name;
    }

    void display()
    {
        cout<<"ID is : "<<id1<<endl;
        cout<<"NAME is : "<<name<<endl;
    }
};
int main()
{
    student s1={101,"romit"};

    s1.display();



}