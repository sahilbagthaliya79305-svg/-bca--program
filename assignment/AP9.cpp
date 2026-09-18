#include<iostream.h>
#include<conio.h>

#define MAX 5

int stack[MAX];
int top = -1;


void push()
{
    int item;

    if(top == MAX - 1)
    {
        cout<<"\nStack Overflow";
    }
    else
    {
        cout<<"\nEnter Item : ";
        cin>>item;
        top++;
        stack[top] = item;
    }
}


void pop()
{
    if(top == -1)
    {
        cout<<"\nStack Underflow";
    }
    else
    {
        cout<<"\nDeleted Item = "<<stack[top];
        top--;
    }
}


void peep()
{
    int pos;

    if(top == -1)
    {
        cout<<"\nStack is Empty";
    }
    else
    {
        cout<<"\nEnter Position from Top : ";
        cin>>pos;

        if(top - pos + 1 < 0)
        {
            cout<<"\nInvalid Position";
        }
        else
        {
            cout<<"\nItem = "<<stack[top - pos + 1];
        }
    }
}


void update()
{
    int pos, value;

    if(top == -1)
    {
        cout<<"\nStack is Empty";
    }
    else
    {
        cout<<"\nEnter Position from Top : ";
        cin>>pos;

        if(top - pos + 1 < 0)
        {
            cout<<"\nInvalid Position";
        }
        else
        {
            cout<<"\nEnter New Value : ";
            cin>>value;
            stack[top - pos + 1] = value;
        }
    }
}


void display()
{
    int i;

    if(top == -1)
    {
        cout<<"\nStack is Empty";
    }
    else
    {
        cout<<"\nStack Elements are : ";
        for(i = top; i >= 0; i--)
        {
            cout<<stack[i]<<" ";
        }
    }
}

void main()
{
    int choice;

    clrscr();

    do
    {
        cout<<"\n\n===== STACK MENU =====";
        cout<<"\n1. Push";
        cout<<"\n2. Pop";
        cout<<"\n3. Peep";
        cout<<"\n4. Update";
        cout<<"\n5. Display";
        cout<<"\n6. Exit";
        cout<<"\nEnter Your Choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1: push();
                    break;

            case 2: pop();
                    break;

            case 3: peep();
                    break;

            case 4: update();
                    break;

            case 5: display();
                    break;

            case 6: cout<<"\nProgram Ended";
                    break;

            default: cout<<"\nInvalid Choice";
        }

    } while(choice != 6);

    getch();
}