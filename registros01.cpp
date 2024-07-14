#include <iostream>
using namespace std;

struct empleados {
    string nombre;
    string sexo;
    float sueldo;
} empleado[50];

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
        cout << "Nombre: "; getline(cin, empleado[i].nombre);
        cout << "Sexo: "; cin >> empleado[i].sexo;
        cout << "Sueldo: "; cin >> empleado[i].sueldo;
    }
    int posmax = 0, posmin = 0;
    for (int i = 0; i < n; i++) {
        if (empleado[i].sueldo > empleado[posmax].sueldo) posmax = i;
        if (empleado[i].sueldo < empleado[posmin].sueldo) posmin = i;
    }
    system ("cls"); 
    cout << "\t   DataTech\n";
    cout << "==============================\n";
    cout << "Empleado con mayor sueldo:\n";
    cout << "Nombre: " << empleado[posmax].nombre << "\n";
    cout << "Sexo: " << empleado[posmax].sexo << "\n";
    cout << "Sueldo: " << empleado[posmax].sueldo << "\n";
    cout << "------------------------------\n";
    cout << "Empleado con menor sueldo:\n";
    cout << "Nombre: " << empleado[posmin].nombre << "\n";
    cout << "Sexo: " << empleado[posmin].sexo << "\n";
    cout << "Sueldo: " << empleado[posmin].sueldo << "\n";
    system ("pause>nul");
    system ("cls");
    cout << "\t   DataTech\n";
    cout << "==============================\n";
    for (int i = 0; i < n; i++) {
        cout << "Empleado " << i+1 << "\n";
        cout << "Nombre: " << empleado[i].nombre << "\n";
        cout << "Sexo: " << empleado[i].sexo << "\n";
        cout << "Sueldo: " << empleado[i].sueldo << "\n";
        if (i < n-1) cout << "------------------------------\n";
    }
    system ("pause>nul");
    return 0;
}