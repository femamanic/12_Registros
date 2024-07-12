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
        cout << "Empleado " << i+1 << ":\n";
        cin.ignore();
        cout << "Nombre: "; getline(cin, empleados[i].nombre);
        cout << "Sexo: "; cin >> empleados[i].sexo;
        cout << "Sueldo: "; cin >> empleados[i].sueldo;
    }
    int posmax = 0, posmin = 0;
    for (int i = 0; i < n; i++) {
        if (empleados[i].sueldo > empleados[posmax].sueldo) posmax = i;
        if (empleados[i].sueldo < empleados[posmin].sueldo) posmin = i;
    }
    system ("cls"); 
    cout << "\t   DataTech\n";
    cout << "==============================\n";
    cout << "Empleado con mayor sueldo:\n";
    cout << "Nombre: " << empleados[posmax].nombre << "\n";
    cout << "Sexo: " << empleados[posmax].sexo << "\n";
    cout << "Sueldo: " << empleados[posmax].sueldo << "\n";
    cout << "------------------------------\n";
    cout << "Empleado con menor sueldo:\n";
    cout << "Nombre: " << empleados[posmin].nombre << "\n";
    cout << "Sexo: " << empleados[posmin].sexo << "\n";
    cout << "Sueldo: " << empleados[posmin].sueldo << "\n";
    system ("pause>nul");
    system ("cls");
    cout << "\t   DataTech\n";
    cout << "==============================\n";
    for (int i = 0; i < n; i++) {
        cout << "Empleado " << i+1 << "\n";
        cout << "Nombre: " << empleados[i].nombre << "\n";
        cout << "Sexo: " << empleados[i].sexo << "\n";
        cout << "Sueldo: " << empleados[i].sueldo << "\n";
        if (i < n-1) cout << "------------------------------\n";
    }
    system ("pause>nul");
    return 0;
}