#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the first number: ";
    cin >> a;
    int b;
    cout << "Enter the second number: ";
    cin >> b;

    cout << "Before exchange: a = " << a << " and b = " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "After exchange: a = " << a << " and b = " << b << endl;
    return 0;
}