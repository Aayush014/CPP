#include <iostream>
using namespace std;
class Shape 
{
public:
    virtual double getArea() = 0;
};
class Circle : public Shape 
{
private:
    double radius;
public:
    Circle(double radius) 
	{
        this->radius = radius;
    }
    double getArea() 
	{
        return 3.14 * radius * radius;
    }
};
class Triangle : public Shape 
{
private:
    double base;
    double height;
public:
    Triangle(double base, double height) 
	{
        this->base = base;
        this->height = height;
    }
    double getArea() 
	{
        return 0.5 * base * height;
    }
};
int main() 
{
    Circle circle(5);
    cout << "The area of the circle is: " << circle.getArea() << endl;
    Triangle triangle(3, 4);
    cout << "The area of the triangle is: " << triangle.getArea() << endl;
    return 0;
}
