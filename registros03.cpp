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
    bool error = false;
    system ("cls");
    cout << "Numero de personas: "; cin >> n;
    for (int i = 0; i < n; i++) {
        system ("cls");
        cout << "Persona " << i+1 << ":\n";
        cin.ignore();
        cout << "Nombres: "; getline(cin, fecha[i].nombres);
        do {
            cout << "Fecha de nacimiento (dd/mm/aaaa): "; cin >> fecha[i].dia >> fecha[i].mes >> fecha[i].ano;
            if (fecha[i].mes == 1 || fecha[i].mes == 3 || fecha[i].mes == 5 || fecha[i].mes == 7 || fecha[i].mes == 8 || fecha[i].mes == 10 || fecha[i].mes == 12) {
                if (fecha[i].dia < 1 || fecha[i].dia > 31) {
                    cout << "\t[Error: dia invalido]\n";
                    error = true;
                } else error = false;
            } else if (fecha[i].mes == 4 || fecha[i].mes == 6 || fecha[i].mes == 9 || fecha[i].mes == 11) {
                if (fecha[i].dia < 1 || fecha[i].dia > 30) {
                    cout << "\t[Error: dia invalido]\n";
                    error = true;
                } else error = false;
            } else if (fecha[i].mes == 2) {
                if ((fecha[i].ano % 4 == 0 && fecha[i].ano % 100 != 0) || fecha[i].ano % 400 == 0) {
                    if (fecha[i].dia < 1 || fecha[i].dia > 29) {
                        cout << "\t[Error: dia invalido]\n";
                        error = true;
                    } else error = false;
                } else {
                    if (fecha[i].dia < 1 || fecha[i].dia > 28) {
                        cout << "\t[Error: dia invalido]\n";
                        error = true;
                    } else error = false;
                }
            } else {
                cout << "\t[Error: mes invalido]\n";
                error = true;
            }
        } while (error == true);
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