#include<iostream.h>
#include<conio.h>

class Shape
{
protected:
    float width, height;

public:
    Shape(float w, float h)
    {
        width = w;
        height = h;
    }
};

class Triangle : public Shape
{
public:
    Triangle(float w, float h) : Shape(w, h) {}

    void area()
    {
        cout << "Area of Triangle = " << (width * height) / 2 << endl;
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(float w, float h) : Shape(w, h) {}

    void area()
    {
        cout << "Area of Rectangle = " << (width * height) << endl;
    }
};

void main()
{
    clrscr();

    Triangle t(10, 5);
    Rectangle r(10, 5);

    t.area();
    r.area();

    getch();
}