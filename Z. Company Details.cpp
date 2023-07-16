#include <iostream>
using namespace std;
class Admin 
{
    public :
        string company_name;
        int manager_salary;
        int employee_salary;
        int total_staff;
        int total_annual_revenue;
        string can_terminate;
    public :
        Admin() 
		{
			cout << "Enter Company Name:- ";
			cin >> company_name;
      cout << "Enter Manager Salary:- ";
			cin >> manager_salary;
			cout << "Enter Employee Salary:- ";
			cin >> employee_salary;
			cout << "Enter Total Staff:- ";
			cin >> total_staff;
			cout << "Enter Total Revenue:- ";
			cin >> total_annual_revenue;
			cout << "Can Terminate:- ";
			cin >> can_terminate; 
			cout << endl;
    }
    void myAccess() 
		{
            cout << "Company name: " << company_name << endl;
            cout << "Manager salary: " << manager_salary << endl;
            cout << "Employee salary: " << employee_salary << endl;
            cout << "Total staff: " << total_staff << endl;
            cout << "Total annual revenue: " << total_annual_revenue << endl;
            cout << "Can terminate: " << can_terminate << endl << endl;
    }
};
class Manager : public Admin 
{
    public:
        Manager() 
    {
		}
};
class Employee : public Admin 
{
    public:
        Employee() 
    {
		}
};
int main() 
{
    Manager m;
    m.myAccess();
    Employee e;
    e.myAccess();
    return 0;
}
