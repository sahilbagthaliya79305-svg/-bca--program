#include<iostream.h>
#include<conio.h>

#define MAX 5

int dq[MAX];
int front = -1, rear = -1;

// Insert at Front
void insertFront()
{
    int item;

    if((front==0 && rear==MAX-1) || (front==rear+1))
    {
        cout<<"\nQueue Overflow";
        return;
    }

    cout<<"\nEnter Item : ";
    cin>>item;

    if(front==-1)
    {
        front=rear=0;
    }
    else if(front==0)
    {
        front=MAX-1;
    }
    else
    {
        front--;
    }

    dq[front]=item;
}

// Insert at Rear
void insertRear()
{
    int item;

    if((front==0 && rear==MAX-1) || (front==rear+1))
    {
        cout<<"\nQueue Overflow";
        return;
    }

    cout<<"\nEnter Item : ";
    cin>>item;

    if(front==-1)
    {
        front=rear=0;
    }
    else if(rear==MAX-1)
    {
        rear=0;
    }
    else
    {
        rear++;
    }

    dq[rear]=item;
}

// Delete from Front
void deleteFront()
{
    if(front==-1)
    {
        cout<<"\nQueue Underflow";
        return;
    }

    cout<<"\nDeleted Item = "<<dq[front];

    if(front==rear)
    {
        front=rear=-1;
    }
    else if(front==MAX-1)
    {
        front=0;
    }
    else
    {
        front++;
    }
}

// Delete from Rear
void deleteRear()
{
    if(front==-1)
    {
        cout<<"\nQueue Underflow";
        return;
    }

    cout<<"\nDeleted Item = "<<dq[rear];

    if(front==rear)
    {
        front=rear=-1;
    }
    else if(rear==0)
    {
        rear=MAX-1;
    }
    else
    {
        rear--;
    }
}

// Display Queue
void display()
{
    int i;

    if(front==-1)
    {
        cout<<"\nQueue is Empty";
        return;
    }

    cout<<"\nDeque Elements : ";

    i=front;
    while(i!=rear)
    {
        cout<<dq[i]<<" ";
        i=(i+1)%MAX;
    }
    cout<<dq[rear];
}

void main()
{
    int choice;
    clrscr();

    do
    {
        cout<<"\n\n===== DEQUE MENU =====";
        cout<<"\n1. Insert Front";
        cout<<"\n2. Insert Rear";
        cout<<"\n3. Delete Front";
        cout<<"\n4. Delete Rear";
        cout<<"\n5. Display";
        cout<<"\n6. Exit";
        cout<<"\nEnter Choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1: insertFront();
                    break;

            case 2: insertRear();
                    break;

            case 3: deleteFront();
                    break;

            case 4: deleteRear();
                    break;

            case 5: display();
                    break;

            case 6: cout<<"\nProgram Ended";
                    break;

            default: cout<<"\nInvalid Choice";
        }

    }while(choice!=6);

    getch();
}