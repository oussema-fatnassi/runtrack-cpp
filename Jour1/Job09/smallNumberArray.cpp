#include <iostream>
using namespace std;

int smallestNumber (int arrayNumbers[], int arraySize)
{
    int smallest = arrayNumbers[0];
    int *p = &smallest;
    for (int i = 1; i < arraySize; i++)
    {
        if (arrayNumbers[i] < smallest)
        {
            smallest = arrayNumbers[i];
        }
    }
    return *p;
}

int main()
{
    int arraySize;
    cout << "Enter the size of the array: ";
    cin >> arraySize;
    int arrayNumbers[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        cout << "Enter a number: ";
        cin >> arrayNumbers[i];
    }
    cout << "The smallest number in the array is: " << smallestNumber(arrayNumbers, arraySize) << endl;
    return 0;
}
