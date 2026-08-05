//to define a funtion outside a class
#include<iostream.h>
#include<conio.h>

class a
{
  public:
  void fun();
};
	void a::fun()
	{
	  cout<<"fun()called";
	}

	void main()
	{
	 clrscr();
	 a a;
	 a.fun();
	 getch();
	}