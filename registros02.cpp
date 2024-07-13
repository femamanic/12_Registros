#include <iostream>
using namespace std;

struct persona {
    string nombres;
    string DNI;
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
            if (personas[i].DNI.length() != 8){
                cout << "\t[Error: DNI invalido]\n";
            }
        } while (personas[i].DNI.length() != 8);
        do {
            cout << "Edad: "; cin >> personas[i].edad;
            if (personas[i].edad < 0) {
                cout << "\t[Error: edad invalida]\n";
            }
        } while (personas[i].edad < 0);
    }
    int mayor = 0; float promayor = 0;
    for (int i = 0; i < n; i++) {
        if (personas[i].edad > 50) {
            mayor++;
            promayor += personas[i].edad;
        }
    }
    system ("cls");
    cout << "Personas con una edad mayor a 50: " << mayor << "\n";
    cout << "==============================\n";
    for (int i = 0; i < n; i++) {
        if (personas[i].edad > 50) {
            cout << "Nombres: " << personas[i].nombres << "\n";
            cout << "DNI: " << personas[i].DNI << "\n";
            cout << "Edad: " << personas[i].edad << "\n";
            if (i < n-1) cout << "------------------------------\n";
            else cout << "==============================\n";
        }
    }
    cout << "Promedio de edad de personas con edad mayor a 50: " << promayor/mayor << "\n";
    system ("pause>nul");
    system ("cls");
    for (int i = 0; i < n; i++) {
        cout << "Nombres: " << personas[i].nombres << "\n";
        cout << "DNI: " << personas[i].DNI << "\n";
        cout << "Edad: " << personas[i].edad << "\n";
        if (i < n-1) cout << "------------------------------\n";
    }
    system ("pause>nul");
    return 0;
}