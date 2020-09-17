/*
Kirjutada programm, mis võtab temperatuuri täisarvuna ja kuvab selle kohta tekstilise hinnangu järgmise
reegli alusel: kui temperatuur on suurem kui 25, siis on väljund ”hot!”, juhul kui temperatuur on väiksem
kui 10, siis on väljund ”cold!”, muul juhul on väljund ”warm!”.
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Sisesta temperatuur (täisarvuna): " << endl;
    int temp;
    cin >> temp;

    if (temp > 25) {
        cout << "Hot!" << endl;
    } else if (temp < 10) {
        cout << "Cold!" << endl;
    } else {
        cout << "Warm!" << endl;
    }

}