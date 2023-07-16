#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int cube[5];
    cout << "Enter 5 numbers: " << endl ;
    for (int i = 0; i < 5; i++)
    {
    	cout << "Enter No :- ";
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cube[i] = arr[i] * arr[i] * arr[i];
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "The cube of " << arr[i] << " is " << cube[i] << endl;
    }
    return 0;
}
