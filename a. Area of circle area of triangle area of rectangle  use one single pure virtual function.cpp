#include <iostream>
using namespace std;
class Shape 
{
public:
    virtual void calculate() = 0;
};
class Circle : public Shape 
{
private:
    float radius;
public:
    Circle(float radius) 
	{
        this->radius = radius;
    }
    void calculate() 
	{
        cout << "Area of circle is: " << 3.14 * radius * radius << endl;
    }
};
class Triangle : public Shape 
{
private:
    float base, height;
public:
    Triangle(float base, float height) 
	{
        this->base = base;
        this->height = height;
    }
    void calculate() 
	{
        cout << "Area of triangle is: " << 0.5 * base * height << endl;
    }
};
class Rectangle : public Shape 
{
private:
    float length, breadth;
public:
    Rectangle(float length, float breadth) 
	{
        this->length = length;
        this->breadth = breadth;
    }
    void calculate() 
	{
        cout << "Area of rectangle is: " << length * breadth << endl;
    }
};
int main() 
{
    Shape *shape;
    int choice;
    cout << "1. Circle" << endl;
    cout << "2. Triangle" << endl;
    cout << "3. Rectangle" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) 
	{
    case 1:
        shape = new Circle(5);
        break;
    case 2:
        shape = new Triangle(10, 5);
        break;
    case 3:
        shape = new Rectangle(10, 5);
        break;
    default:
        cout << "Invalid choice" << endl;
        return 0;
    }
    shape->calculate();
    return 0;
}
