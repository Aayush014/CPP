#include<iostream>
using namespace std;

class car;
class garage{
    public:
    garage(int arg)
    {
    	try
      {
          throw arg;
			}
      catch(int arg)
      {
          cout<<arg<<"handeled..";
			}
	}

};
class car
{
    public:
        Motor()
    {
        throw car(78)
		}
};
int main()
{
    try
    {
        Motor m1;
    }
    catch(...)
    {
        cout<<"----END---";
    }
    return 0;
}
