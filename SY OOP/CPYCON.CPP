#include<iostream.h>
#include<conio.h>
class student
{
	int roll,mark;
	public:
	student(int x,int y)
	{
		roll=x;
		mark=y;
	}
		student(student&t)
	{
		roll=t.roll;
		mark=t.mark;
	}
		void showdata()
	{
		cout<<"\n roll no:"<<roll;
		cout<<"\n mark:"<<mark;
	}
};
void main()
{
	clrscr();
	cout<<"\n parameterized constructor output r\n";
	student r(50,25);
	r.showdata();
	cout<<"\n\n copy constructor stu(r)\n";
	student std(r);
	std.showdata();
	getch();

}