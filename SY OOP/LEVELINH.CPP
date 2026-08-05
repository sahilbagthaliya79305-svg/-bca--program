#include<iostream.h>
#include<conio.h>
class student
{
	public:
	int rno;
	char name[20];
};
class marks:public student
{
	public:
	int m1,m2;
};
class result:public marks
{
	public:
	int result;
	void get()
	{
	    cout<<"enter Roll No:";
	    cin>>rno;
	    cout<<"Enter name:";
	    cin>>name;
	    cout<<"Enter marks1 and marks2:";
	    cin>>m1>>m2;
	}
	void cal()
	{
	    result=m1+m2;
	}
	void display()
	{
	    cout<<"Name:"<<name<<endl;
	    cout<<"Roll No:"<<rno<<endl;
	    cout<<"marks1:"<<m1<<endl;
	    cout<<"marks2:"<<m2<<endl;
	    cout<<"Result:"<<result;
	}
};
void main()
{
	result r;
	clrscr();
	r.get();
	r.cal();
	r.display();
	getch();
}