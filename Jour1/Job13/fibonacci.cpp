#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

bool binaryCounter(unsigned long n) {
    int count = 0;
    while (n > 0) {
        if (n % 2 != 0) { 
            count++;
        }
        n /= 2; 
    }
    return (count % 2 == 0); 
}

int main(){
    
    for (int i = 0; i < 10; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    unsigned long num = 1564343591;
    cout << "Binary representation: ";
    for (int i = 31; i >= 0; i--) {
        cout << ((num >> i) & 1);
    }
    bool result = binaryCounter(num);
    cout << endl;

    if (result) {
        cout << "TRUE" << endl;         // The number of bits set to 1 is even.
    } else {
        cout << "FALSE" << endl;        // The number of bits set to 1 is odd.
    }
    return 0;
}