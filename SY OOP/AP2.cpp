#include<iostream.h>
#include<conio.h>

class Patient
{
protected:
    char pat_name[30];
    int age;
    char sex;

public:
    void getPatient()
    {
        cout<<"Enter Patient Name: ";
        cin>>pat_name;
        cout<<"Enter Age: ";
        cin>>age;
        cout<<"Enter Sex (M/F): ";
        cin>>sex;
    }

    void showPatient()
    {
        cout<<"\nPatient Name : "<<pat_name;
        cout<<"\nAge          : "<<age;
        cout<<"\nSex          : "<<sex;
    }
};

class IPD
{
protected:
    int ward_no;
    int bed_no;
    float charge_per_day;

public:
    void getIPD()
    {
        cout<<"Enter Ward Number: ";
        cin>>ward_no;
        cout<<"Enter Bed Number: ";
        cin>>bed_no;
        cout<<"Enter Charge Per Day: ";
        cin>>charge_per_day;
    }

    void showIPD()
    {
        cout<<"\nWard Number  : "<<ward_no;
        cout<<"\nBed Number   : "<<bed_no;
        cout<<"\nCharge/Day   : "<<charge_per_day;
    }
};

class IPD_Patient : public Patient, public IPD
{
private:
    int no_of_days;

public:
    void getData()
    {
        getPatient();
        getIPD();
        cout<<"Enter Number of Days Admitted: ";
        cin>>no_of_days;
    }

    void display()
    {
        if(no_of_days > 5)
        {
            showPatient();
            showIPD();
            cout<<"\nDays Admitted: "<<no_of_days;
            cout<<"\nTotal Charge : "<<charge_per_day * no_of_days;
        }
        else
        {
            cout<<"\nPatient admitted for 5 or fewer days.";
        }
    }
};

void main()
{
    clrscr();

    IPD_Patient p;

    p.getData();
    p.display();

    getch();
}