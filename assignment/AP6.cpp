#include<iostream.h>
#include<conio.h>

class Student
{
    int roll;
    char name[20];

public:
    // Default Constructor
    Student()
    {
        roll = 0;
        strcpy(name, "Unknown");
    }

    // Parameterized Constructor
    Student(int r, char n[])
    {
        roll = r;
        strcpy(name, n);
    }

    // Copy Constructor
    Student(Student &s)
    {
        roll = s.roll;
        strcpy(name, s.name);
    }

    void display()
    {
        cout<<"\nRoll No : "<<roll;
        cout<<"\nName    : "<<name<<endl;
    }
};

void main()
{
    clrscr();

    Student s1;                 // Default Constructor
    Student s2(101, "Ravi");    // Parameterized Constructor
    Student s3(s2);             // Copy Constructor

    cout<<"Default Constructor:";
    s1.display();

    cout<<"\nParameterized Constructor:";
    s2.display();

    cout<<"\nCopy Constructor:";
    s3.display();

    getch();
}