#include <iostream>

using namespace std;

double palgad [] = {923.3, 1033, 3928.5, 509, 999.9, 1000, 1709};
int length = sizeof(palgad)/sizeof(double);

//palgatõusu arvutamine user inputi puhul
double palk;
double raise = palk * 1.05; //palgatõus

int main()
{
    for (int i = 0; i < length; i++) {
        if (palgad[i] < 1000) {
                cout << "Pärast palgatõusu on su palk " << palgad[i] * 1.05 << " eurot." << endl;
        }
    }

    //palgatõus user inputiga
    cout << "Mis on su palk? " << endl;
    cin >> palk;
    
    if (palk < 1000) {
        cout << "Sinu uueks palgaks on " << raise << " eurot." << endl;
    } else {
        cout << "Selle palgaga palgatõusu ei saa." << endl;
    }
}
