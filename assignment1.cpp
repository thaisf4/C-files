//Schrijf een programma dat twee getallen van de gebruiker vraagt en hun som berekent.
//Toon het resultaat op het scherm.

#include <iostream>
using namespace std;

int main() {
    int number1;
    cout <<"Enter a number: ";
    cin >> number1;
    int number2;
    cout << "Enter a second number: ";
    cin >> number2;
    int sum = number1 + number2;
    cout << "The sum is: " << sum;
    return 0;
}