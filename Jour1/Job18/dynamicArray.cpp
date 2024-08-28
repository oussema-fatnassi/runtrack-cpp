#include <iostream>
using namespace std;

int addElement(int* &array, int &size, int element) {
    int* newArray = new int[size + 1];
    for (int i = 0; i < size; i++) {
        newArray[i] = array[i];
    }
    newArray[size] = element;
    size++;
    delete[] array;
    array = newArray;
    return size;
}

int showArray(int* array, int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    return size;
}

int main() {
    int size = 5;
    int* array = new int[size];
    
    addElement(array, size, 1);
    addElement(array, size, 2);
    addElement(array, size, 3);
    addElement(array, size, 4);
    addElement(array, size, 5);
    showArray(array, size);
    delete[] array;
    return 0;
}