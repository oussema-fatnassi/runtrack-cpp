#include <iostream>
using namespace std;

int doubleArray(int* array, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        *(array + i) *= 2; 
        sum += *(array + i); 
    }
    return sum;
}

void printArray(int* array, int size) {
    cout << "Elements of the array after doubling: ";
    for (int i = 0; i < size; i++) {
        cout << *(array + i) << " "; 
    }
    cout << endl;
}

int main() {
    int arraySize;
    cout << "Enter the size of the array: ";
    cin >> arraySize;
    
    int arrayNumbers[arraySize];
    for (int i = 0; i < arraySize; i++) {
        cout << "Enter a number: ";
        cin >> arrayNumbers[i];
    }
    
    int sum = doubleArray(arrayNumbers, arraySize);
    
    cout << "The sum of all doubled elements is: " << sum << endl;
    printArray(arrayNumbers, arraySize);

    return 0;
}