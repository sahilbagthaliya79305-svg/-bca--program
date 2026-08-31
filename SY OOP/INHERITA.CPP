// example of inheritance
#include<iostream.h>
#include<conio.h>
class base  //parent class
{
	int a;
	public:
		void geta()
		{
		  a=10;
		}
		void puta()
		{
			cout<<"a="<<a<<endl;
		}
};
class derived:public base //child class
{
	int d;
	public:
		void getd()
		{
		      d=20;
		}
		void putd()
		{
		      cout<<"d="<<d<<endl;
		}
};
void main()
{
clrscr();
derived d1;
d1.geta();
d1.puta();
d1.getd();
d1.putd();
getch();
}
