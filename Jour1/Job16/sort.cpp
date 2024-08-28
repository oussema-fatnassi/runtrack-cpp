#include <iostream>
using namespace std;

void MySortString(string* array, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(array + i) > *(array + j)) {
                string temp = *(array + i);
                *(array + i) = *(array + j);
                *(array + j) = temp;
            }
        }
    }
}

void printArray(string* array, int size) {
    cout << "Elements of the array after sorting: ";
    for (int i = 0; i < size; i++) {
        cout << *(array + i) << " ";
    }
    cout << endl;
}

int main() {
    int arraySize;
    cout << "Enter the size of the array: ";
    cin >> arraySize;

    string arrayStrings[arraySize];
    for (int i = 0; i < arraySize; i++) {
        cout << "Enter a string: ";
        cin >> arrayStrings[i];
    }

    MySortString(arrayStrings, arraySize);

    printArray(arrayStrings, arraySize);

    return 0;
}