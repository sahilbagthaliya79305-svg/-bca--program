#include<iostream.h>
#include<conio.h>

class Number
{
    int a, b;

public:
    void getData()
    {
        cout<<"Enter First Number : ";
        cin>>a;

        cout<<"Enter Second Number : ";
        cin>>b;
    }

    friend void sum(Number);
};

void sum(Number n)
{
    cout<<"\nSum = "<<n.a + n.b;
}

void main()
{
    clrscr();

    Number n1;

    n1.getData();
    sum(n1);

    getch();
}