#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Entrer a number to invert: ";
    cin >> n;
    int inverted = 0;
    
    while (n > 0)
    {
        inverted = inverted * 10 + n % 10;
        n /= 10;
    }

    cout << "Inverted number: " << inverted << endl;
    return 0;
}