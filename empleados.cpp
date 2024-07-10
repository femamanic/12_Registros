#include <iostream>
using namespace std;

string meses[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
                    "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

struct EMP{
    int numero;
    string nombre;
    float ventas [12];
    float sueldo;
} EMPLEADO [50];

int main () {
    system("cls");
    int n;
    cout << "Numero de empleados: "; cin >> n;
    for (int i = 0; i < n; i++) {
        system("cls");
        cout << "EMPLEADO " << i+1 << "\n";
        cout << "Numero: "; cin >> EMPLEADO[i].numero;
        cin.ignore();
        cout << "Nombre: "; getline(cin,EMPLEADO[i].nombre);
        for (int j = 0; j < 12; j++) {
            cout << "Ventas " << meses[j] << ": ";
            cin >> EMPLEADO[i].ventas[j];
        }
        cout << "Salario: "; cin >> EMPLEADO[i].sueldo;
    }
    int maxVenA = 0, pos = 0;
    for (int i = 0; i < n; i++){
        int venA = 0;
        for (int j = 0; j < 12; j++){
            venA = venA + EMPLEADO[i].ventas[j];
        }
        if (venA > maxVenA){
            maxVenA = venA;
            pos = i;
        }
    }
    system("cls");
    cout << "Empleado con mayor venta anual:\n" << EMPLEADO[pos].numero << " " <<
            EMPLEADO[pos].nombre << "\n";
    cout << "===============================\n";
    cout << "Salarios:\n";
    cout << "-------------------------------\n";
    for (int i = 0; i < n; i++){
        cout << "Empleado " << EMPLEADO[i].numero << " " << EMPLEADO[i].nombre << "\n";
        cout << "Salario: " << EMPLEADO[i].sueldo << "\n";
        int vent = 0;
        for (int j = 0; j < 12; j++){
            vent = vent + EMPLEADO[i].ventas[j];
        }
        if (vent > 100){
            EMPLEADO[i].sueldo = EMPLEADO[i].sueldo + (0.1 * EMPLEADO[i].sueldo);
            cout << "Nuevo salario: " << EMPLEADO[i].sueldo << "\n";
        }
        if (i < n-1) cout << "-------------------------------\n";
        else cout << "===============================\n";
    }
    int N[50], j = 0;
    string D[50];
    for (int i = 0; i < n; i++){
        int vdic = 0;
        vdic = EMPLEADO[i].ventas[11];
        if (vdic < 30){
            N[j] = EMPLEADO[i].numero;
            D[j] = EMPLEADO[i].nombre;
            j++;
        }
    }
    cout << "Empleados con ventas menores a 30 en diciembre:\n";
    for (int i = 0; i < j; i++){
        cout << N[i] << " " << D[i] << "\n";
    }
    system("pause>nul");
    return 0;
}