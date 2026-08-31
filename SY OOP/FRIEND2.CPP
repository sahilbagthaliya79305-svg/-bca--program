#include<iostream.h>
#include<conio.h>
class second;
class first
{
	private:
		int a;
		friend void sum(first,second);
	public:
	void getdata()
	{
		cout<<"enter a:";
		cin>>a;
	}
};
class second
{
	private:
	int b;
	friend void sum(first,second);
	public:
	void getdata()
	{
		cout<<"enter value of B:";
		cin>>b;
	}
};
void sum(first f1,second s1)
{
	cout<<"addition is:"<<f1.a+s1.b;
}
void main()
{
	clrscr();
	first f1;
	second s1;
	f1.getdata();
	s1.getdata();
	sum(f1,s1);
	getch();
}