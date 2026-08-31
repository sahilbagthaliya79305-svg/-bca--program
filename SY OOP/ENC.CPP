#include<iostream.h>
#include<conio.h>
class encapsulation
{
	private://data hidden from outside world
	int num;
	public://function to set value of variable a
	void set(int a)
	{
		num=a;
	}
	int get()
	{
	return num;
	}
};
void main()
{
	encapsulation obj;
	obj.set(5);
	cout<<obj.get();
	getch();
}