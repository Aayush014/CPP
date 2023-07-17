#include<iostream>
using namespace std;

int main()
{
	int feet1,inch1;
	int feet2,inch2;
	int feet,inch;
	
		cout << "Enter Feet :- ";
		cin >> feet1;
		cout << "Enter Inch :- ";
		cin >> inch1;
		
		cout << endl;
		
		cout << "Enter Feet :- ";
		cin >> feet2;
		cout << "Enter Inch :- ";
		cin >> inch2;
		
		cout << endl;
		
		feet = feet1 + feet2;
		inch = inch1 + inch2;
		
		int temp = inch /12;
		feet = feet + temp;
		inch =inch %12;
		
		cout << endl << "Feet : " << feet << " | Inch : " << inch;
}
