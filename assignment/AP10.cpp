#include<iostream.h>
#include<conio.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;


void insert()
{
    int item;

    if(rear == MAX - 1)
    {
        cout<<"\nQueue Overflow";
    }
    else
    {
        if(front == -1)
            front = 0;

        cout<<"\nEnter Item : ";
        cin>>item;

        rear++;
        queue[rear] = item;
    }
}


void del()
{
    if(front == -1 || front > rear)
    {
        cout<<"\nQueue Underflow";
    }
    else
    {
        cout<<"\nDeleted Item = "<<queue[front];
        front++;

        if(front > rear)
        {
            front = rear = -1;
        }
    }
}


void display()
{
    int i;

    if(front == -1)
    {
        cout<<"\nQueue is Empty";
    }
    else
    {
        cout<<"\nQueue Elements are : ";
        for(i = front; i <= rear; i++)
        {
            cout<<queue[i]<<" ";
        }
    }
}

void main()
{
    int choice;

    clrscr();

    do
    {
        cout<<"\n\n===== SIMPLE QUEUE MENU =====";
        cout<<"\n1. Insert";
        cout<<"\n2. Delete";
        cout<<"\n3. Display";
        cout<<"\n4. Exit";
        cout<<"\nEnter Your Choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1: insert();
                    break;

            case 2: del();
                    break;

            case 3: display();
                    break;

            case 4: cout<<"\nProgram Ended";
                    break;

            default: cout<<"\nInvalid Choice";
        }

    }while(choice != 4);

    getch();
}