#include <iostream>
using namespace std;
class Base 
{
public:
    virtual void display() 
	{
        cout << "Base Class" << endl;
  }
};
class Derived : public Base 
{
public:
    void display() 
	{
        cout << "Derived Class" << endl;
  }
};
int main() 
{
    Base *b = new Base();
    Derived *d = new Derived();
    b->display();
    d->display();
    return 0;
}
