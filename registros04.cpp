#include <iostream>
using namespace std;

struct atletas {
    string nombres;
    string pais;
    string disiplina;
    int nMedallas;
} atleta[50];

int main () {
    system ("cls");
    int n;
    string p;
    cout << "Numero de atletas: "; cin >> n;
    cout << "==============================\n";
    for (int i = 0; i < n; i++) {
        system ("cls");
        cout << "Atleta " << i+1 << ":\n";
        cin.ignore();
        cout << "Nombres: "; getline(cin, atleta[i].nombres);
        cout << "Pais: "; getline(cin, atleta[i].pais);
        cout << "Disiplina: "; getline(cin, atleta[i].disiplina);
        cout << "Numero de medallas: "; cin >> atleta[i].nMedallas;
    }
    system ("cls");
    cout << "Ingresa el pais para buscar atletas: "; cin >> p;
    system ("cls");
    cout << "Atletas de " << p << "\n";
    cout << "==============================\n";
    for (int i = 0; i < n; i++) {
        if (atleta[i].pais == p) {
            cout << "Nombres: " << atleta[i].nombres << "\n";
            cout << "Pais: " << atleta[i].pais << "\n";
            cout << "Disiplina: " << atleta[i].disiplina << "\n";
            cout << "Numero de medallas: " << atleta[i].nMedallas << "\n";
            cout << "------------------------------\n";
        }
    }
    return 0;
}