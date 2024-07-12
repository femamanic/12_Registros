#include <iostream>
using namespace std;

struct empleado {
    string nombre;
    string sexo;
    float sueldo;
} empleados[50];

int main () {
    system ("cls");
    int n;
    cout << "\t   DataTech\n";
    cout << "==============================\n";
    cout << "Numero de empleados: "; cin >> n;
    for (int i = 0; i < n; i++) {
        system ("cls");
        cout << "\tDataTech\n";
        cout << "==============================\n";
        cout << "EMPLEADO " << i+1 << "\n";
        cin.ignore();
        cout << "Nombre: "; getline(cin, empleados[i].nombre);
        cout << "Sexo: "; cin >> empleados[i].sexo;
        cout << "Sueldo: "; cin >> empleados[i].sueldo;
    }
    system ("cls");
    for (int i = 0; i < n; i++) {
        cout << "Empleado " << i+1 << "\n";
        cout << "Nombre: " << empleados[i].nombre << "\n";
        cout << "Sexo: " << empleados[i].sexo << "\n";
        cout << "Sueldo: " << empleados[i].sueldo << "\n";
        if (i < n-1) cout << "------------------------------\n";
    }
}