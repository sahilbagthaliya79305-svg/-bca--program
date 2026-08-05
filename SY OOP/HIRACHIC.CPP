 #include<iostream.h>
#include<conio.h>


class a
{
  public:
  int x,y;
  void getdata()
  {
	cout<<"\n enter value x and y:";
	cin>>x>>y;
  }
};

class b : public a
{
	public:
	void product()
	{
	  cout<<"\n product ="<< x*y;
	}
};

class c : public a
{
	public:
	void sum()
	{
	   cout << "\n sum ="<< x+y;
	}
};
void main()
{
   b obj1;
   c obj2;
   clrscr();
   obj1.getdata();
   obj1.product();
   obj2.getdata();
   obj2.sum();
   getch();
}