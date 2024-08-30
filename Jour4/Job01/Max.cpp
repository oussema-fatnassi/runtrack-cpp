#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

template <typename T> T myMax(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    cout << myMax<int>(3, 5) << endl;
    cout << myMax<double>(3.5, 5.5) << endl;
    cout << myMax<char>('a', 'b') << endl;
    cout << myMax<string>("hello", "world") << endl;
    return 0;
}