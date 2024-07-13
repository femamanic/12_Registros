#include <iostream>
using namespace std;

struct fecha {
    string nombres;
    int dia;
    int mes;
    int ano;
} fecha[50];

int main () {
    int n;
    system ("cls");
    cout << "Numero de personas: "; cin >> n;
    for (int i = 0; i < n; i++) {
        system ("cls");
        cout << "Persona " << i+1 << ":\n";
        cin.ignore();
        cout << "Nombres: "; getline(cin, fecha[i].nombres);
        cout << "Fecha de nacimiento (dd/mm/aaaa): "; cin >> fecha[i].dia >> fecha[i].mes >> fecha[i].ano;
    }
    system ("cls");
    cout << "Personas registradas\n";
    cout << "==============================\n";
    for (int i = 0; i < n; i++) {
        cout << "Nombres: " << fecha[i].nombres << "\n";
        cout << "Fecha de nacimiento: " << fecha[i].dia << "/" << fecha[i].mes << "/" << fecha[i].ano << "\n";
        if (i < n-1) cout << "------------------------------\n";
    }
    system ("pause>nul");
    return 0;
}