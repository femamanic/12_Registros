#include <iostream>
using namespace std;

string meses[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

struct fecha {
    string nombres;
    int dia;
    int mes;
    int ano;
} fecha[50];

int main () {
    int n, m;
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
    do {
        system ("cls");
        cout << "Buscar las personas nacidas en el mes (0 = salir): "; cin >> m;
        switch (m) {
            case 0:
                system ("cls");
                cout << "Saliendo del programa...\n";
                break;
            default:
                if (m < 1 || m > 12) {
                    cout << "\t[Error: mes invalido]\n";
                } else {
                    system ("cls");
                    cout << "Personas nacidas en el mes de " << meses[m-1] << "\n";
                    cout << "=======================================\n";
                    for (int i = 0; i < n; i++) {
                        if (fecha[i].mes == m) {
                            cout << "Nombres: " << fecha[i].nombres << "\n";
                            cout << "Fecha de nacimiento: " << fecha[i].dia << "/" << fecha[i].mes << "/" << fecha[i].ano << "\n";
                            cout << "---------------------------------------\n";
                        }
                    }
                }
                break;
        }
        system ("pause>nul");
    } while (m != 0);
    return 0;
}