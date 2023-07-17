#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;
public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "a = " << a << ", b = " << b << endl;
    }
};
int main()
{
    Complex c1(10, 20);
    c1.display();
    return 0;
}
