#include<iostream.h>
#include<conio.h>
#include<string.h>

class st
{
	public:
	int rno;
	char name[50];
	int sub1,sub2,sub3;

	void get()
	{
		cout<<"Enter Rno";
		cin>>rno;

		cout<<"enter name";
		cin>>name;

		cout<<"Enter three subject markes.";
		cin>>sub1>>sub2>>sub3;
	}
};
class mark : public st
{
	public:
	int total;
	float per;
	char grade[10];

	void cal()
	{
		total = sub1+sub2+sub3;
		per = total/3;

		if (per >=85)
		{
			strcpy(grade,"A+");
		}
		else if (per >=75)
		{
			strcpy(grade,"A");
		}
		else if (per>=65)
		{
			strcpy(grade,"B+");
		}
		else if (per>55)
		{
			strcpy(grade,"B");
		}
		else if (per>=35)
		{
			strcpy(grade,"c");
		}
		else
		{
			strcpy(grade,"fail");
		}
	}

	void display()
	{
		cout<<rno<<"\t"
		    <<name<<"\t"
		    <<sub1<<"\t"
		    <<sub2<<"\t"
		    <<sub3<<"\t"
		    <<total<<"\t"
		    <<per<<"\t"
		    <<grade<<endl;
	}
};
void main()
{
	clrscr();

	mark s[2];
	int i;

	for(i=0;i<2; i++)
	{
		cout<<"\n enter details of student"<<i+1<<endl;
		s[i].get();
		s[i].cal();
	}
	cout<<"\n==========student=============="<<endl;
	for(i=0;i<2;i++)
	{
		s[i].display();
	}
	getch();
}

