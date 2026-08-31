#include<iostream.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                #include<iostream.h
#include<conio.h>
class parent
{
	private:
	int a,b;
	public:
	parent(int p1,int p2)
	{
		a=p1;
		b=p2;
	}
	void show()
	{
	cout<<"the first value of parent class:"<<a<<endl;
	cout<<"the second value of parent class:"<<b<<endl;
	}
};
class child:public parent
{
	private:
	int x,y;
	public:
	child(int p1,int p2,int c1,int c2):parent(p1,p2)
	{
	x=c1;
	y=c2;
	}
	void display()
	{
		cout<<"the first value of child class:"<<x<<endl;
		cout<<"the second value of child class:"<<y<<endl;
	}
};
void main()
{
	clrscr();
	child obj(44,77,2,9);
	obj.show();
	obj.display();
	getch();

}


