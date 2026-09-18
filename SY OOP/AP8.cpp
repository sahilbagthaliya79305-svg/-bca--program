#include<iostream.h>
#include<conio.h>

class Student
{
public:
    virtual void display()
    {
        cout<<"This is Base Class (Student)"<<endl;
    }
};

class Result : public Student
{
public:
    void display()
    {
        cout<<"This is Derived Class (Result)"<<endl;
    }
};

void main()
{
    clrscr();

    Student *ptr;
    Result r;

    ptr = &r;
    ptr->display();      // Calls derived class function

    getch();
}