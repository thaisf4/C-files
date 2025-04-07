//Vraag de gebruiker naar hun geboortedatum (jaar) en bereken hun huidige leeftijd.
//Gebruik hiervoor een constante voor het huidige jaar.

#include <iostream>
using namespace std;

int main() {
    const int current_year = 2025200;
    int year_born;
    cout<< "Enter your birth year: ";
    cin >> year_born;
    int age = current_year - year_born;
    cout<< "Age: " << age;
    return 0;
}