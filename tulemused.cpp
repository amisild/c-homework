#include <iostream>
#include <fstream>

using namespace std;

string nimi;
int tulemus[6];
int i, vahe;
int first_max = 0;
int n = sizeof(tulemus) / sizeof(tulemus[0]);

int input (int n) {
    cout << "Mis on su nimi? " << endl;
    cin >> nimi;

    for (i = 0; i < n; i++) {
        cout << "Mis oli su " << i + 1 << ". katse kuulitõuke tulemus meetrites? " << endl;
        cin >> tulemus[i];

        if (tulemus[i] > tulemus[i-1]) {
            vahe = tulemus[i] - tulemus[i-1];
            if (i == 0) {
                cout << endl;
            } else {
                cout << "See tulemus on eelmisest " << vahe << " meetri võrra parem!" << endl;
                cout << "\n";
            }
            
            
        } else {
            vahe = tulemus[i-1] - tulemus[i];
            cout << "See tulemus on eelmisest " << vahe << " meetri võrra kehvem!" << endl;
            cout << "\n";
        }
    }
    return 0;
}

int finding_max (int tulemus[], int n) {
    int first_max = 0;
    for (i = 0; i < n; i++) {
        if (tulemus[i] > first_max) {
            first_max = tulemus[i];
        }
    }
    cout << "Maksimaalne tulemus on " << first_max << " meetrit." << endl;
    return first_max;
}

int saving_to_file(string nimi, int tulemus[]) {
    ofstream myfile;
    myfile.open (nimi + "_tulemused.txt");
    myfile << "Sportlase nimi on " << nimi << ".\n";
    myfile << "Tema tulemused (meetrites) on järgmised: " << "\n";
    for (i = 0; i < 6; i++) {
        myfile << tulemus[i];
        myfile << endl;
    }
    myfile << "Sportlase parim tulemus on " << finding_max(tulemus, n) << ".\n";
    myfile.close();
    return 0;
}

int main() {

    input(n);

    saving_to_file(nimi, tulemus);

    return 0;
}
