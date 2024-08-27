#include <iostream>
using namespace std;

int main() {
    int N;
    int cubeSum = 0;

    cout << "Give me an integer N : ";
    cin >> N;

    if (N < 5) {
        cout << "N must be equal or bigger then 5" << endl;
        return 1;
    }

    for (int i = 5; i <= N; ++i) {
        cubeSum += i * i * i; 
    }

    cout << "The sum of the cubes from 5^3 to " << N << "^3 is : " << cubeSum << endl;

    return 0;
}