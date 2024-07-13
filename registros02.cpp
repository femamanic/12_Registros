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
        cout << "DNI: "; cin >> personas[i].DNI;
        cout << "Edad: "; cin >> personas[i].edad;
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