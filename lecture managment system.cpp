#include<iostream>
using namespace std;
class Lecture
{
    private:
    string lecturername;
    string subjectname;
    string coursename;
    int numoflecture;

    public:

    

    void inputdetail()
    {
        cout<<"Enter lecturer: ";
        cin>>lecturername;

        cout<<"Enter subject: ";
        cin>>subjectname;

        cout<<"Enter course: ";
        cin>>coursename;

        cout<<"Enter totallecture: ";
        cin>>numoflecture;

    }
    
    void display()
    {
        cout<<"\n Lecturer: "<<lecturername<<endl;
        cout<<" subject: "<<subjectname<<endl;
        cout<<" course:  "<<coursename<<endl;
        cout<<" totallecture: "<<numoflecture<<endl;
    }


};
int main()
{
     int n;
    cout << "Enter number of lecturers: ";
    cin >> n;

    
    Lecture lecture[n];
    
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for Lecturer " << i+1 << ":\n";
        lecture[i].inputdetail();
    }

    
    cout << "\n Lecture Details Entered ";
    for (int i = 0; i < n; i++)
    {
        lecture[i].display();
    }

    return 0;
}