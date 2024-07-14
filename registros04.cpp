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
    int n, masM, posM;
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
    masM = atleta[0].nMedallas;
    posM = 0;
    for (int i = 1; i < n; i++) {
        if (atleta[i].pais == p) {
            if (atleta[i].nMedallas > masM) {
                masM = atleta[i].nMedallas;
                posM = i;
            }
        }
    }
    system ("cls");
    cout << "   Atleta con mas medallas de " << p << "\n";
    cout << "Nombres: " << atleta[posM].nombres << "\n";
    cout << "Pais: " << atleta[posM].pais << "\n";
    cout << "Disiplina: " << atleta[posM].disiplina << "\n";
    cout << "Numero de medallas: " << atleta[posM].nMedallas << "\n";
    cout << "========================================\n";
    cout << "   Registro de atletas de " << p << ":\n";
    for (int i = 0; i < n; i++) {
        if (atleta[i].pais == p) {
            cout << "Nombres: " << atleta[i].nombres << "\n";
            cout << "Pais: " << atleta[i].pais << "\n";
            cout << "Disiplina: " << atleta[i].disiplina << "\n";
            cout << "Numero de medallas: " << atleta[i].nMedallas << "\n";
            cout << "----------------------------------------\n";
        }
    }
    return 0;
}