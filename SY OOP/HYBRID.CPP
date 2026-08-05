#include<iostream.h>
#include<Conio.h>
class A
{
	int n;
	public:
	void input()
	{
		cout<<"Enter value:";
		cin>>n;
	}
	void show()
	{
		cout<<n<<endl;
	}
};
class B : virtual public A
{
	int n;
	public:
	void input()
	{
		cout<<"Enter value:";
		cin>>n;
	}
	void show()
	{
		cout<<n<<endl;
	}
};
class C:virtual public A
{
	int n;
	public:
	void input()
	{
		cout<<"Enter value:";
		cin>>n;
	}
	void show()
	{
		cout<<n<<endl;
	}
};
class D:public B,public C
{
	int n;
	public:
	void input()
	{
		cout<<"Enter value:";
		cin>>n;
	}
	void show()
	{
		cout<<n<<endl;
	}
};
void main()
{
	clrscr();
	A obj;
	B obj1;
	C obj2;
	D obj3;

	obj.input();
	obj.show();

	obj1.input();
	obj1.show();

	obj2.input();
	obj2.show();

	obj3.input();
	obj3.show();
	getch();
}