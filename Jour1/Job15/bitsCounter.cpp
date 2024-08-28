#include <iostream>
using namespace std;

bool bitsCounter(int number){
    int bitCounter = 0;

    while(number){
        bitCounter ^= number & 1;
        number >>= 1;
    }
    return (bitCounter == 0)^1;
}

int main(){

    int number;
    cout << "Enter a number: ";
    cin >> number;

    if(bitsCounter(number)){
        cout << "The number of bits set to 1 is odd." << endl;
    } else {
        cout << "The number of bits set to 1 is even." << endl;
    }
    return 0;
}