#include<iostream.h>
#include <stdlib.h>
#include<conio.h>
int n=5;
int a[5];
int top = -1;
class Stack
{
   public:
   void push(int item)
   {
		int i;
		if(top == n-1)
	{
	cout<<"Over Flow:"<<endl;
	return;
	}
		top=top+1;
		a[top]=item;
}
void pop()
{
     if(top==-1)
      {
      cout<<"Under Flow :"<<endl;
      return;
      }
	top=top-1;
}
void disp()
{
	int i;
	for(i=0;i<=top;i++)
      {
	cout<<a[i]<<endl;
      }
}
void peep()
{
     int i;
    clrscr();

    cout<<"\n\n\t\t Which element you want to display from top?:";
    cin>>i;

    if((top-i+1)<=-1)
   cout<<"\n\n\t\t\t Value under flow on peep..";

    else
   cout<<"\n\n\t\t\t Value at %d location from top is: %d"<<i<<a[top -i+1];
    getch();
}
void change()
{
   int i;
	cout<<"Enter element which you want to change :";
	cin>>i;
  if((top -i+1)<=-1)
	cout<<"Stack is under flow on peep.";
  else
  {
	cout<<"\n Value at this location is :%d"<<a[top -i+1];
	cin>>"\n Enter new value :";
	cout<<a[top -i+1];
   }
   getch();
 }

};
void main()
{
	int item;
	int ch=1;
	Stack st;
	clrscr();
	cout<<"Push      1\n";
	cout<<"Pop       2\n";
	cout<<"Disp      3\n";
	cout<<"Peep      4\n";
	cout<<"Changes   5\n";
	cout<<"Exit      6\n";
	cout<<"Enter your choice:";
	cin>>ch;
	while(ch !=0)
 {
	switch (ch)
  {
	case 1:cout<<"Enter item:";
		cin>>item;
		 st.push(item);
		st.disp();
		break;
	case 2:st.pop();
		st.disp();
		break;
	case 3:st.disp();
		break;
	case 4:st.peep();
		break;
	case 5:st.change();
		break;
	case 6:exit(0);
		default:
		cout<<"Enter right choice \n";
   }
		cout<<"\n Enter your choice:";
		cin>>ch;
	}
      getch();
}

