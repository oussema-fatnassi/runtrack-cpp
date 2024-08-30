#include "Box*.cpp"
#include <iostream>
using namespace std;
#include <string>

int main()
{
    int* integer = new int(42);
    Box<int> box(integer);
    cout << box.getElement() << endl;

    string* str = new string("hello");
    Box<string> box2(str);
    cout << box2.getElement() << endl;

    return 0;
}