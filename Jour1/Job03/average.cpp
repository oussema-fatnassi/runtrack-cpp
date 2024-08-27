#include <iostream>
using namespace std;

int main()
{
    int numbers[5];
    int average = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter an integer number: ";
        cin >> numbers[i];
        average += numbers[i];
    }

    average /= 5;
    cout << "The average of the numbers is " << average << endl;

    return 0;
}