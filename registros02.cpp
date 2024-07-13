#include <iostream>
using namespace std;

struct persona {
    string nombres;
    int DNI;
    int edad;
} personas[50];

int main () {
    system ("cls");
    int n;
    cout << "Numero de personas: "; cin >> n;
    for (int i = 0; i < n; i++) {
        system ("cls");
        cout << "Persona " << i+1 << ":\n";
        cin.ignore();
        cout << "Nombres: "; getline(cin, personas[i].nombres);
        do {
            cout << "DNI: "; cin >> personas[i].DNI;
            if (personas[i].DNI < 10000000 or personas[i].DNI > 99999999) {
                cout << "\t[Error: DNI invalido]\n";
            }
        } while (personas[i].DNI < 10000000 or personas[i].DNI > 99999999);
        do {
            cout << "Edad: "; cin >> personas[i].edad;
            if (personas[i].edad < 0) {
                cout << "\t[Error: edad invalida]\n";
            }
        } while (personas[i].edad < 0);
    }
    system ("cls");
    for (int i = 0; i < n; i++) {
        cout << "Persona " << i+1 << "\n";
        cout << "Nombres: " << personas[i].nombres << "\n";
        cout << "DNI: " << personas[i].DNI << "\n";
        cout << "Edad: " << personas[i].edad << "\n";
        if (i < n-1) cout << "------------------------------\n";
    }
    system ("pause>nul");
    return 0;
}