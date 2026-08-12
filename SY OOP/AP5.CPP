#include <iostream.h>
#include <conio.h>

class Person
{
	protected:
	char name[30];
	int age;

	public:
	void getPersonDetails() {
		cout << "Enter Name: ";
		cin >> name;
		cout << "Enter Age: ";
		cin >> age;
    }
    void showPersonDetails() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
    }
};

class Employee : public Person
{
	protected:
	int eid;
	float salary;

	public:
	void getEmployeeDetails() {
	getPersonDetails();
		cout << "Enter Employee ID: ";
		cin >> eid;
		cout << "Enter Salary: ";
		cin >> salary;
    }
    void showEmployeeDetails()
     {
	showPersonDetails();
		cout << "Employee ID: " << eid << endl;
		cout << "Salary: $" << salary << endl;
    }
};

class Programmer : public Employee
{
	private:
	int no_of_lang;
	public:
    void getProgrammerDetails()
     {
	getEmployeeDetails();
		cout << "Enter Number of Languages Known: ";
		cin >> no_of_lang;
    }
    void showProgrammerDetails()
     {
		cout << "\n--- Programmer Details ---" << endl;
	showEmployeeDetails();
		cout << "Number of Languages Known: " << no_of_lang << endl;
    }
};


void main() {
    clrscr();

    Programmer p;

	 cout << "Enter Details for the Programmer:" << endl;
    p.getProgrammerDetails();

    p.showProgrammerDetails();

    getch();
}