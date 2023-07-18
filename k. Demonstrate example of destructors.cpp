#include <iostream>
using namespace std;
class Person 
{
public:
  Person() 
  {
    cout << "Person constructor called" << endl;
  }
  ~Person() 
  {
    cout << "Person destructor called" << endl;
  }
};
int main() 
{
  Person p;
  return 0;
}
