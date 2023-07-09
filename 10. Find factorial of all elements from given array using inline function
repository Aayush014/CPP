#include <iostream>
using namespace std;

inline int f(int n)
{
    if (n == 0)
        return 1;
    return n * f(n - 1);
}
int main()
{
    int n, i;
    cout << "Enter the Limit :- ";
    cin >> n;
    int arr[n];
    cout << "Enter the Numbers :- ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    for (i = 0; i < n; i++)
        cout << "Factorial of " << arr[i] << " is " << f(arr[i]) << endl;
    return 0;
}
