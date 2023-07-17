#include<iostream>
using namespace std;

class Operator
{
	private :
		int a,b;
		
	public :
		void input()
		{
			cout << "Enter value of A : ";
			cin >> a;
			cout << "Enter value of B : ";
			cin >> b;
			cout << endl;
		}
			
		void output()
		{
			cout << "A is " << a << endl;
			cout << "B is " << b << endl << endl;	
		}
		
	Operator operator+(Operator &op)
	{
		Operator temp;
		temp.a = this->a + op.a;
		temp.b = this->b + op.b;
		return temp;
	}	
};

int main()
{
	Operator op1,op2,op3;
	
	op1.input();
	op2.input();
	
	op1.output();
	op2.output();
	
	op3 =op1 + op2;
	
	op3.output();
	return 0;
}
