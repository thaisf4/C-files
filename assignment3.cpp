//Schrijf een programma dat een temperatuur in graden Celsius invoert en deze omzet naar Fahrenheit.
//Gebruik de formule: F = (C × 9/5) + 32

#include <iostream>
using namespace std;

int main(){
    double celsius;
    cout<<"Enter a temperature in Celsius: "<< endl;
    cin >> celsius;
    // Convert Celsius to Fahrenheit
    double fahrenheit = (celsius * 9/5) + 32;
    cout << celsius << " Celsius in Fahrenheit is "<< fahrenheit;
    return 0;
}