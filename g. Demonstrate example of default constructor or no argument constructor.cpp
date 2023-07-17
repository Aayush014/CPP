#include <iostream>
using namespace std;
class A 
{
    public:
        int x;
        A() 
		{
           x = 10;
        }
};
int main() 
{
    A obj;
    cout << obj.x << endl;
    return 0;
}
