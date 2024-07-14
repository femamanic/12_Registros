#include <iostream>
using namespace std;

struct personas {
    string nombres;
    string DNI;
    int edad;
} persona[50];

int main () {
    system ("cls");
    int n; float promEdad, sEdad = 0;
    cout << "Numero de personas: "; cin >> n;
    for (int i = 0; i < n; i++) {
        system ("cls");
        cout << "Persona " << i+1 << ":\n";
        cin.ignore();
        cout << "Nombres: "; getline(cin, persona[i].nombres);
        do {
            cout << "DNI: "; cin >> persona[i].DNI;
            if (persona[i].DNI.length() != 8){
                cout << "\t[Error: DNI invalido]\n";
            }
        } while (persona[i].DNI.length() != 8);
        do {
            cout << "Edad: "; cin >> persona[i].edad;
            if (persona[i].edad < 0) {
                cout << "\t[Error: edad invalida]\n";
            }
        } while (persona[i].edad < 0);
        sEdad += persona[i].edad;
    }
    int nMayor = 0; float sMayor = 0 , promMayor;
    for (int i = 0; i < n; i++) {
        if (persona[i].edad > 50) {
            nMayor++;
            sMayor += persona[i].edad;
        }
    }
    system ("cls");
    cout << "Personas con una edad mayor a 50: " << nMayor << "\n";
    cout << "==============================\n";
    for (int i = 0; i < n; i++) {
        if (persona[i].edad > 50) {
            cout << "Nombres: " << persona[i].nombres << "\n";
            cout << "DNI: " << persona[i].DNI << "\n";
            cout << "Edad: " << persona[i].edad << "\n";
            if (i < n-1) cout << "------------------------------\n";
            else cout << "==============================\n";
        }
    }
    promMayor = sMayor/nMayor;
    cout << "Promedio de edad de personas con edad mayor a 50: " << promMayor << "\n";
    system ("pause>nul");
    system ("cls");
    cout << "     Personas registradas\n";
    cout << "==============================\n";
    promEdad = sEdad/n;
    cout << "Promedio de edad: " << promEdad << "\n";
    cout << "==============================\n";
    for (int i = 0; i < n; i++) {
        cout << "Nombres: " << persona[i].nombres << "\n";
        cout << "DNI: " << persona[i].DNI << "\n";
        cout << "Edad: " << persona[i].edad << "\n";
        if (i < n-1) cout << "------------------------------\n";
    }
    system ("pause>nul");
    return 0;
}