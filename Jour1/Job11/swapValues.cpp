#include <iostream>
using namespace std;

void swapValues(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    swapValues(a, b);
    cout << "Swapped values: " << a << " " << b << endl;
    return 0;
}