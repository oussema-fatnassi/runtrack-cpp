#include "Box.cpp"
#include <iostream>
using namespace std;

int main()
{
    Box<int> box(5);
    cout << box.getElement() << endl;

    Box<string> box2("hello");
    cout << box2.getElement() << endl;

    return 0;
}