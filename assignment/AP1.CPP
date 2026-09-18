#include<iostream.h>
#include <conio.h>

class patient
{
       public:
       char pat_name[20];
       int age;
       char sex[10];

    void get()
    {
       cout<<"enter name of patient:";
       cin>>pat_name;
       cout<<"enter age";
       cin>>age;
       cout<<"enter sex";
       cin>>sex;
  }
};
class ipd
{
	public:
	int ward_no;
	int bed_no;
	int charge_per_day;

    void get1()
    {
	cout<<"enter ward no:";
	cin>>ward_no;
	cout<<"enter bed no:";
	cin>>bed_no;
	cout<<"enter charge_per_day:";
	cin>>charge_per_day;
    }
};
class ipd_patient: public patient,public ipd
{
   public:
   int days;
   void get2()
   {
	cout<<"enter number of days:";
	cin>>days;
   }

   void showdata()
   {
     if(days>5)
     {
	cout<<"-----patient details----";
	cout<<"pat_name:"<<pat_name<<endl;
	cout<<"age:"<<age<<endl;
	cout<<"sex:"<<sex<<endl;
	cout<<"wardno:"<<ward_no<<endl;
	cout<<"bedno"<<bed_no<<endl;
	cout<<"chargesperday:"<<charge_per_day<<endl;
	cout<<"day admitted:"<<days*charge_per_day<<endl;
    }
   else
    {
      cout<<"patient admitted for 5days or less"<<endl;
    }
  }
};
void main()
{
 ipd_patient p;
 clrscr();
 p.get();
 p.get1();
 p.get2();
 p.showdata();
 getch();
};


