#include <iostream>
using namespace std;

int main()
{
    double priceWithoutTax;
    cout << "Enter the price without tax of kg of carrots: ";
    cin >> priceWithoutTax;
    int kg;
    cout << "Enter the number of kg of carrots: ";
    cin >> kg;
    int tax;
    cout << "Enter the tax in percentage: ";
    cin >> tax;

    double priceWithTax = priceWithoutTax * kg * (1 + tax / 100.0);
    cout << "The price with tax for " << kg << " kg of carrots is " << priceWithTax << endl;

    return 0;
}