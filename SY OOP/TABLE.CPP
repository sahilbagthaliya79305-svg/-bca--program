#include<iostream.h>
#include<conio.h>
class a
{
	int n,i,r;
	public:
	void table()
	{
		cout<<"enter any number...";
		cin>>n;
		for(i=1;i<=10;i++)
		{
			r=n*i;
			cout<<n<<"*"<<i<<"="<<r<<endl;
		}
	}
};
void main()
{
	clrscr();
	a obj;
	obj.table();
	getch();
}