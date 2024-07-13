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
    return 0;
}