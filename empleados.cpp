#include <iostream>
#include <string>
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
        cout << "Empleado " << i+1 << "\n";
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
    cout << "Empleado con mayor venta anual:\n" << EMPLEADO[pos].numero << " " <<
            EMPLEADO[pos].nombre << "\n";
    for (int i = 0; i < n; i++){
        int vent = 0;
        for (int j = 0; j < 12; j++){
            vent = vent + EMPLEADO[i].ventas[j];
        }
        if (vent > 100){
            EMPLEADO[i].sueldo = EMPLEADO[i].sueldo + (0.1 * EMPLEADO[i].sueldo);
        }
    }
    cout << EMPLEADO[0].sueldo << EMPLEADO[1].sueldo << EMPLEADO[2].sueldo << "\n";
    int N[50], j = 0;
    string D[50];
    for (int i = 0; i < n; i++){
        int vdic = 0;
        vdic = EMPLEADO[i].ventas[12];
        if (vdic < 30){
            N[j] = EMPLEADO[i].numero;
            D[j] = EMPLEADO[i].nombre;
            j++;
        }
    }
    for (int i = 0; i < j; i++){
        cout << "Empleado con ventas menores a 30 en diciembre: " << N[i] << D[i] << "\n";
    }
    return 0;
}