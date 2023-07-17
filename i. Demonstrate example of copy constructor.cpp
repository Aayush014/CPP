#include <iostream>
using namespace std;
class Point
{
private:
    int x, y;
public:
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    Point(const Point &p)
    {
        x = p.x;
        y = p.y;
    }
    void display()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
};
int main()
{
    Point p1(10, 20);
    Point p2 = p1; 
    p1.display();
    p2.display();
    return 0;
}
