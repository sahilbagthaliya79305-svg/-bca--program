#include<iostream.h>
#include<conio.h>
class add
{
       int a,b,c;
       public:
       void input()
      {
		 cout <<"enter value...:";
		 cin>>a>>b;
      }
      void sum()
      {
	    c=a*b;
      }
      void show()
      {
		 cout<<c;
      }
};
void main()
{
   clrscr();
   add obj;
   obj.input();
   obj.sum();
   obj.show();
   getch();
  } ;