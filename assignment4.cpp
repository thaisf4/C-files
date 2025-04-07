//Rekenmachine
//Schrijf een programma dat de gebruiker twee getallen en 
//een bewerking (optellen, aftrekken, vermenigvuldigen, of delen) laat invoeren en het resultaat berekent.
#include <iostream>
using namespace std;

int main() {
    double getal1, getal2;
    string bewerking;
    cout << "Voer het eerste getal in: ";
    cin >> getal1;
    cout << "Voer het tweede getal in: ";
    cin >> getal2;
    cout <<"Voer een bewerking (optellen, aftrekken, vermenigvuldigen, of delen) in: ";
    cin >> bewerking;

    if (bewerking == "optellen"){
        cout << "Het resultaat is: " << (getal1 + getal2) << endl;
    } else if (bewerking == "aftrekken"){
        cout << "Het resultaat is: " << (getal1 - getal2);
    } else if (bewerking == "vermenigvuldigen"){
        cout << "Het resultaat is: " << (getal1 * getal2);
    } else if (bewerking == "delen"){
        if (getal2 != 0){
            cout << "Het resultaat is: " << (getal1 / getal2);
        } else{
            cout << "Het is niet mogelijk te delen door 0!";
        }   
    } else {
        cout << "De gekozen bewerking is ongeldig";
    }

    return 0;
}